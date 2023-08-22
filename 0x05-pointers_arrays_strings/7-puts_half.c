#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * puts_half - Prints half a string
 * Description - Prints half a given string followed by a new line
 * @str: Given string
 * Return: 0 Always (Success)
 */
void puts_half(char *str)
{
	int length = strlen(str);
	int n;
	int a;

	if ((length % 2) == 0)
	{
		n = length / 2;
	}
	else
	{
		n = (length + 1) / 2;
	}

	for (a = n; a < length; a++)
	{
		_putchar(str[a]);
	}
	_putchar('\n');
}
