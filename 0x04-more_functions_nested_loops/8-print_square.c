#include <stdio.h>
#include "main.h"
/**
 * print_square - Prints a square
 * Description - Prints a square, followed by a new line
 * @size: The size of the squrare
 */
void print_square(int size)
{
	int r;
	int c;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (r = 0; r < size; r++)
		{
			for (c = 0; c < size; c++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
