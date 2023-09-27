#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * positive_integer - Checks if the given int is positive
 * Description - Checks if the given integer is positive
 * @str: Given string
 * Return: 1
 */

int positive_integer(const char *str)
{
	while (*str)
	{
		if (!isdigit(*str))
		{
			return (0);
		}
		str++;
	}
	return (1);
}

/**
 * main - Multiplies two positive numbers
 * Description - Multiplies two positive numbers
 * @argc: Argument count
 * @argv: Argument vector
 * Return: 98 or Error upon error or, 0 if success
 */

int main(int argc, char *argv[])
{
	char *num1;
	char *num2;
	long int total;
	long int n1;
	long int n2;

	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}

	num1 = argv[1];
	num2 = argv[2];

	if (!positive_integer(num1) || !positive_integer(num2))
	{
		printf("Error\n");
		return (98);
	}

	n1 = atol(num1);
	n2 = atol(num2);

	total = n1 * n2;
	printf("%ld\n", total);

	return (0);
}
