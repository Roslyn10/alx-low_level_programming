#include "main.h"
/**
 * times_table - Prints the times table
 * Description - Prints the times table of 9
 * Return: void
 * @m: Inserted number
 * @l: 9 times table
 */
void times_table(void)
{
	int r;
	int o;
	int t;

	for (r = 0; r < 0; r++)
	{
		for (o = 0; o < 10; o++)
		{
			t = o * r;
			if ( o == 0)
			{
				_putchar(t + '0');
			}
			if (t < 10 && o != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(t + '0');
			}
			else if (t >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((t / 10) + '0');
				_putchar((t % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
