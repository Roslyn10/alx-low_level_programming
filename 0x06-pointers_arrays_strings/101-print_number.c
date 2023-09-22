#include "main.h"
/**
 * print_number - Prints an integer
 * Description - Prints a given integer
 * @n: Given integer
 */
void print_number(int n)
{
	unsigned int d;

	d = n;

	if  (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	else if (n / 10 != 0)
	{
		print_number(n / 10);
	}
	_putchar((n % 10) + '0');
}
