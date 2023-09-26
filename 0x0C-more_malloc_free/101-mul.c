#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * positive_intger - Checks if the given int is positive
 * Description - Checks if the given integer is positive
 * @str: 
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
 * @argc:
 * @argv:
 * Return:
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
		return (98);
	}

	num1 = argv[1];
	num2 = argv[2];

	if (!positive_integer(num1) || !positive_integer(num2))
	{
		return (98);
	}

	n1 = atoi(num1);
	n2 = atoi(num2);

	total = n1 * n2;
	printf("%ld\n", total);

	return (0);
}
