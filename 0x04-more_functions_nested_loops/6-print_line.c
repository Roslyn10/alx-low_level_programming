#include "main.h"
#include <stdio.h>
/**
 * print_line - Draws a straight line in the terminal
 * Description - Dreaws a straight line in the terminal using #
 * @n: Number of times the character is printed
 */
void print_line(int n)
{
	int l;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (l = 0; l < n; l++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
