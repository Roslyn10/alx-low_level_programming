#include "main.h"
/**
 * _puts_recursion - Prints a string
 * Description - Prints a string, followed by a new line
 * @s: Pointer
 * Return: 0 Always (Success)
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}

	_putchar(*s);

	_puts_recursion(s + 1);
}
