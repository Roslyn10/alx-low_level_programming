#include <stdio.h>
#include "main.h"
/**
 * _puts - Prints a string
 * Description - Prints a string, followed by a new line
 * @s: Character string
 * Return: 0 Always (Success)
 */
void _puts(char *s)
{
	while (*s != '\0')
	{
		_putchar(*s);
		s++;
	}
	_putchar('\n');
}
