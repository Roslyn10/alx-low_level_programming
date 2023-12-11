#include "main.h"
/**
 * _puts - Prints a string
 * Description - Prints a string, followed by a new line
 * @str: Character string
 * Return: 0 Always (Success)
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
