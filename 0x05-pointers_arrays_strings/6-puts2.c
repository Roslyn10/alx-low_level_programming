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

	while (*p != '\0' && *(p + 1) != '\0')
	{
		_putchar(*p);
		p += 2;
	}
	_putchar('\n');
}
