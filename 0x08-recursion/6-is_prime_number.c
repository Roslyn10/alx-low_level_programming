#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * is_prime_helper - Checks whether an integer is a prime number
 * Description - Checks whether an int is a prime number
 * @n: Given integer
 * @m: Divisor
 * Return: 0 if its not and 1 if it is
 */

int is_prime_helper(int n, int m)
{
	if (m <= 1)
	{
		return (1);
	}

	if (n % m == 0)
	{
		return (0);
	}

	return (is_prime_helper(n, m - 1));
}


/**
 * is_prime_number - Checks if an integer is a prime number
 * Description - Chaecks if an integer is a prime number or not
 * @n: Given integer
 * Return: Prime recusrion
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}

	return (is_prime_helper(n, n / 2));
}
