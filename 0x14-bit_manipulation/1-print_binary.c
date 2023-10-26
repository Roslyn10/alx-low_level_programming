#include "main.h"

/**
 * print_binary - A function that prints the binary representaion of a number
 * Description - Prints the binary representation of a number
 * @n: NUmber of bits
 * Return: Nothing
 */

void print_binary(unsigned long int n)
{
	unsigned int s;
	int b;
	int m = 0;
	int n_m;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	n_m = sizeof(unsigned long int) * 7;

	for (s = n_m - 1; s > 0; s--)
	{
		b = (n >> (s -1)) & 1;

		if ( b == 1)
		{
			m = 1;
		}

		if (m)
		{
			_putchar(b + '0');
		}
	}
}
