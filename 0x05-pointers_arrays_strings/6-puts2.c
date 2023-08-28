#include "main.h"
/**
 * puts2 - Prints every other character
 * Decription - Prints every other character of a string
 * @str: Given string
 * Return: 0 Always (Success)
 */
void puts2(char *str)
{
	char *p = str;
	int u = 0;
	int length = 0;
	int q;

	while (*p != '\0')
	{
		p++;
		length++;
	}

	u = length - 1;
	for (q = 0; q <= u; q++)
	{
		if (q % 2 == 0)
		{
			_putchar(str[q]);
		}
	}
	_putchar('\n');
}
