#include "main.h"
/**
 * print_number - Prints an integer
 * Description - Prints given integer
 * Return: 0 Always (Success)
 * @n: Given number
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	if (n / 10 != 0)
	{
		print_number(n / 10);
	}

	_putchar('0' + n % 10);
}
