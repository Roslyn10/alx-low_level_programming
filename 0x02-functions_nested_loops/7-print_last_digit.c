#include "main.h"
/**
 * print_last_digit - Prints last digit of a number
 * Description - Prints the last digit of a given number
 * Return: Last digit of int d
 * @d: Given number
 */
int print_last_digit(int d)
{
	int last = d % 10;

	if (last < 0)
	{
		last = last * -1;
	}
	_putchar(last + '0');
	if (d > 0)
	{
		_putchar(d + '0');
	}
	return (last);
}
