#include "main.h"
/**
 * more_numbers - Prints numbers 1 to 14 10times
 * Description - Prints 10 times the numbers 0 to 14, followed by a new line
 * @f: Given int
 * Return: 0 Always (Success)
 */
void more_numbers(void)
{
	int f;
	int k;

	for (f = 0; f < 10; f++)
	{
		for (k = 0; k <= 14; k++)
		{
			if (k >= 10)
				_putchar('0' + k / 10);
			_putchar('0' + k % 10);
		}
		_putchar('\n');
	}
}
