#include "main.h"
/**
 * times_table - Prints the times table
 * Description - Prints the times table of 9
 * Return: void
 */
void times_table(void)
{
	int l;
	int f;
	int m;

	for (l = 0; l < 10; l++)
	{
		for (f = 0; f < 10; f++)
		{
			m = l * f;
			if (f == 0)
			{
				_putchar(m + '0');
			}
			if (m < 10 && f != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(m + '0');
			}
			else if (m >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((m / 10) + '0');
				_putchar((m % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
