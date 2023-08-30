#include "main.h"
/**
 * factorial - Finds and returns the factorial of a number
 * Description - Finds and returns the factorial of a number
 * @n: Given integer
 * Return: n if its lower than 0, and -1 to indicate an error
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
