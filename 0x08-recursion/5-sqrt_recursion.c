#include "main.h"
/**
 * _sqrt_helper - Recursion function
 * Description - Helps function _sqrt_recusrion
 * _sqrt-recursion - Returns the natural root of a number
 * Description - Returns the natural root of a number
 * @n: Given number
 * @g: Placeholder
 * Return: n and 0
 */
int _sqrt_helper(int n, int g);
/**
 * _sqrt-recursion - Returns the natural root of a number
 * Description - Returns the natural root of a number
 * _sqrt_helper - Recursion function
 * Description - Helps function _sqrt_recusrion
 * @g: Placeholder
 * @n: Given number
 * Return: 0 if n has a natural root, and -1 if not
 */

int _sqrt_recursion(int n)
{
	return (_sqrt_helper(n, 0));
}

int _sqrt_helper(int n, int g)
{
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
		return (_sqrt_helper(n, g + 1));
	}
}

