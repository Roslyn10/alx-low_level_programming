#include "main.h"
/**
 * print_last_digit - Prints last digit of a number
 * Description - Prints the last digit of a given number
 * Return: Last digit of int d
 * @d: Given number
 */
int print_last_digit(int d)
{
	if (d < 0)
	{
		_putchar((d * -1) + '0');
		return (d);
	}
	else
	{
		_putchar(d % 10 + '0');
		return (d % 10);
	}
}
