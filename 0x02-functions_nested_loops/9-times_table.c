#include "main.h"
/**
 * times_table - Prints the times table
 * Description - Prints the times table of 9
 * Return: void
 * @m: Inserted number
 * @l: 
 */
void times_table(void)
{
	int l = 9;
	int m;

	for (m = 1; m <= 10; m++)
	{
		_putchar(l * m);
		_putchar('\n');
	}
}
