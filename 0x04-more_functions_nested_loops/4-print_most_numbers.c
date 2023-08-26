#include "main.h"
#include <stdio.h>
/**
 * print_most_numbers - Prints numbers except 2 and 4
 * Description - Prints numbers except 2 and 4, followed by a new line
 * @r: Given int
 * Return: 0 Always (Success)
 */
void print_most_numbers(void)
{
	int r;

	for ( r = 0; r < 10; r++)
	{
		if ( r != 2 && r != 4)
		{
			_putchar('0' + r);
		}
	}
	_putchar('\n');
}
