#include "main.h"
/**
 * is_prime_number - Checks if an integer is a prime number
 * Description - Chaecks if an integer is a prime number or not
 * @n: Given number
 * Return: 1 if it is and 0 if not
 */
int is_prime_number(int n)
{
	int v;

	if (n <= 1)
	{
		return (0);
	}
	
	if (v * v > n)
	{
		return (1);
	}

	if (n % v == 0)
	{
		return (0);
	}
	
	return (is_prime_number(n, v + 1));
}	
