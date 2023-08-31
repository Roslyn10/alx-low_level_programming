#include "main.h"
/**
 * _pow_recursion - Returns the value of x to the power of y
 * Descrption - Returns the value of x to the power of y
 * @x: Base number that will be raised to the power of y
 * @y: Exponent that should be raised by x
 * Return: y if its lower  than 0, and -1 if not
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}

	else if (y < 0)
	{
		return (-1);
	}

	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
