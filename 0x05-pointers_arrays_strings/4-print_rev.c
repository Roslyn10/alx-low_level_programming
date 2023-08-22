#include "main.h"
/**
 * print_rev - Prints a string in reverse
 * Description - Print a string inrevers, followed by a new line
 * @s: The given string
 * Return: 0 Always (Success)
 */
void print_rev(char *s)
{
	int i;
	int length = 0;

	while (s[length]  != '\0')
	{
		length++;
	}

	for (i = length - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
