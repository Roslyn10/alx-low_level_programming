#include "main.h"
/**
 * _sqrt_recursion(int n) - Returns the natural root of a number
 * Description - Returns the natural root of a number
 * @n: Given number
 * @w: Plaeholder
 * Return: 0 if it does and -1 if not
 */
int _sqrt_recursion(int n)
{
	int g;

	if (g * g == n)
	{
		return (g);
	}
	else if (g * g > n)
	{
		return (-1);
	}
	else
	{
		return _sqrt_recursion(n, g + 1);
	}
}

int _sqrt_helper (int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return _sqrt_helper(n, 0);
}
