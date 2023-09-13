#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * op_add - Adds a and b
 * @a: First given integer
 * @b: Second given integer
 * Return: a + b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Subtracts b from a
 * @a: First given integer
 * @b: Second given integer
 * Return: a - b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Multiplies a and b
 * @a: First given integer
 * @b: Second given integer
 * Return: a * b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Divides a and b
 * @a: First given integer
 * @b: Secong given integer
 * Return: a / b
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - Divides a by b and return the remainder
 * @a: First given integer
 * @b: Second given integer
 * Return: a % b
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
