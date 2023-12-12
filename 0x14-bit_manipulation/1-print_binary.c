#include "main.h"

/**
 * print_binary - A function that prints the binary representaion of a number
 * Description - Prints the binary representation of a number
 * @n: NUmber of bits
 * Return: Nothing
 */

void print_binary(unsigned long int n)
{
	int l, k = 0;
	unsigned long int len;

	for (l = 63; l >= 0; l--)
	{
		len = n >> l;

		if (len & 1)
		{
			_putchar('1');
			k++;
		}
		else if (k)
			_putchar('0');
	}
	if (!k)
		_putchar('0');
}
