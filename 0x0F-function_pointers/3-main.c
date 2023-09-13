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

int main(int __attribute__((__unused__)) argc, char *argv[])int ma
{
	int num1, num2;
	char *op;
	int r;
	int (*o)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	op = argv[2];

	o = get_op_func(op);

	r = o(num1, num2);
	printf("%d\n", r);

	return (0);
}
