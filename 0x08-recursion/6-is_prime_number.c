#include "main.h"
/**
 * is_prime_helper - Checks whether an integer is a prime numebr or not
 * Description - Checks whethera given integer is a prime number or not
 * @n: Given integer
 * Return: 0 if its not and 1 if it is
 */
int is_prime_helper(int n)
{
	if (n <= 1)
	{
		return (0);
	}

	return (2);
}

/**
 * is_prime_number - Checks if an integer is a prime number
 * Description - Chaecks if an integer is a prime number or not
 * @n: Given integer
 * Return: 1 if it is and 0 if not
 */
int is_prime_number(int n)
{
	int v = 1;

	if (v * v > n)
	{
		return (1);
	}

	if (n % v == 0)
	{
		return (0);
	}

	return (v + 1);
}
