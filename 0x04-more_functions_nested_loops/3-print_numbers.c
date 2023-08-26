#include "main.h"
#include <stdio.h>
/**
 * print_numbers - Prints the numbers form 0 to 9
 * Description - Prints numbers for 0 to 9, followed by a new line
 */
void print_numbers(void)
{
	int o;

	for (o = 0; o <= 9; o++)
	{
		_putchar ('0' + o);
	}
	_putchar('\n');
}
