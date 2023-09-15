#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - Prints result of operations
 * @argc: Number of arguments
 * @argv: An array of pointer
 * Return: 0 Always (Success)
 */

int main(int argc, char *argv[])
{
	int num1, num2;
	char *r;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	r = argv[2];
	num2 = atoi(argv[3]);

	if (get_op_func(r) == NULL || r[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*r == '/' && num2 == 0) || (*r == '%' && num2 == 0))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", get_op_func(r)(num1, num2));

	return (0);
}
