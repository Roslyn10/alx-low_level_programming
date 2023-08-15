#include "main.h"
/**
 * print_sign - +; - or 0
 * Description - Prints 1 if positive, 0 if 0 and  if negative
 * @n: Can either be positive, negative or zero
 * Return: 1 if +, 0 if 0, -1 if-
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar ('-');
		return (-1);
	}
}
