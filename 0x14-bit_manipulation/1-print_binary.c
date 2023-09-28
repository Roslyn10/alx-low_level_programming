#include <stdio.h>
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
	int m = sizeof(unsigned long int) * 2;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	for (s = m - 1; s > 0; s--)
	{
		b = (n >> (s - 1)) & 1;
		_putchar(b + '0');
	}
}
