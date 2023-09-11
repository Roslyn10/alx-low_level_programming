#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * is_prime_number - Checks if an integer is a prime number
 * Description - Chaecks if an integer is a prime number or not
 * @n: Given integer
 * Return:
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return ((n) n - 1);
}

/**
 * is_prime_helper - Checks whether an integer is a prime numebr or not
 * Description - Checks whethera given integer is a prime number or not
 * @n: Given integer
 * @v: Divisor
 * Return: 0 if its not and 1 if it is
 */
int is_prime_helper(int n)
{
	int v;

	if (v == 1)
	{
		return (1);
	}
	if (n % v == 0 && v > 0)
	{
		return (0);
	}

	return ((n) v - 1);
}
