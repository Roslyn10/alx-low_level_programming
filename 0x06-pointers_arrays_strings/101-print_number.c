#include "main.h"
/**
 * print_number - Prints an integer
 * Description - Prints a given integer
 * @n: Given integer
 */
void print_number(int n)
{
	unsigned int d = (n < 0) ? -n : n;

	if  (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	if (d == 0)
	{
		_putchar('0');
		return;
	}

	else if (d / 10 != 0)
	{
		print_number(d / 10);
	}
	_putchar((d % 10) + '0');
}
