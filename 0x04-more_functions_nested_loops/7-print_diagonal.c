#include "main.h"
#include <stdio.h>
/**
 * print_diagonal - Prints a diagonal line
 * Description - Prints a diagonal line in the terminal
 * @n: Number of times the character \ should be printed
 */
void print_diagonal(int n)
{
	int e;
	int z;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (e = 0; e < n; e++)
		{
			for (z = 0; z < e; z++)
			{
				_putchar(' ');
			}
		_putchar('\\');
		_putchar('\n');
		}
	}
}
