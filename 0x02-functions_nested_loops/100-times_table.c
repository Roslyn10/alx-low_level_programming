#include <stdio.h>
/**
 * print_times_tables - Prints the times table
 * Description - Prints the times table of a given number
 * @n: Give number
 * Return: 0 Always(Success)
 */
void print_times_tables(int n)
{
	if (n < 10)
	{
		_putchar(' ');
		_putchar(' ');
		_putchar(n + '0');
	}
	else if (n < 100)
	{
		_putchar(' ');
		_putchar((n / 10) + '0');
		_putchar((n % 10) + '0');
	}
	else
	{
		_putchar((n / 100) + '0');
		_putchar(((n / 10) % 10) + '0');
		_putchar((n % 10) + '0');
	}
}
