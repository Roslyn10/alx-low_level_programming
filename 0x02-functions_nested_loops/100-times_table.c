#include <stdio.h>
/**
 * print_times_tables - Prints the times table
 * Description - Prints the times table of a given number
 * @n: Give number
 * Return: 0 Always(Success)
 */
void print_times_tables(int n)
{
	int d, r, t;

	if (n >= 0 && n <= 15)
	{
		for (d = 0; d <= n; d++)
		{
			for (r = 0; r <= n; r++)
			{
				t = d * r;
				if (r == 0)
				{
					_putchar(t + '0');
				}
				else if (t < 10 && r != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(t + '0');
				}
				else if (t >= 10 && t < 100)
				{
					_putchar(',');
					_putchar(' ');
					_putcahr(' ');
					_putchar((t / 10) + '0');
					_putchar((t % 10) + '0');
				} else if (t >= 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar((t / 10) + '0');
					_putchar((t % 10) + '0');
				}
			}
		}
		_putchar('\n');
	}
}
