#include "3-calc.h"
#include <string.h>
#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * get_op_func - Selects the correct function
 * @s: Given character
 * Return: A pointer to the correct funtion
 */

int (*get_op_func(char *s))(int, int)
{
	int k;

	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	k = 0;

	while (ops[k].op)
	{
		if (strcmp(ops[k].op, s) == 0)
		{
			return (ops[k].f);
		}
		k++;
	}

	printf("Error\n");
	exit(99);
}
