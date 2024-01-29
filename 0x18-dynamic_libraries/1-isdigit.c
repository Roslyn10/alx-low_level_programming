#include "main.h"
/**
 * _isdigit - Check for a digit
 * Description - Checks for a given digit (0 through 9)
 * Return: 1 if c and 0 if not
 * @c: Given digit
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
