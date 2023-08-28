#include "main.h"
/**
 * print_triangle - Prints a triangle, followed by a new line
 * Description - Prints a triangle using #
 * @size: The size of the triangle
 * Return: 0 Always (Success)
 */
void print_triangle(int size)
{
	int t;
	int a;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (t = 1; t <= size; t++)
		{
			for (a = 0; a < size - t; t++)
			{
				_putchar(' ');
			}
			for (a = 0; a < t; a++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
