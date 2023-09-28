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
	int s;
	int b;
	int m = sizeof(unsigned int) * 1;

	for (s = m - 1; s >= 0; s--)
	{
		b = (n >> s) & 1;
		_putchar(b + '0');
	}
}
