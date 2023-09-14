#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include "variadic_functions.h"

/**
 * sum_them_all - Returns the sum of all its parameters
 * Description - A funnction that returns the sum of all its parameters
 * @n: Parameters passed
 * Return: 0 if n == 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	int s = 0;
	unsigned int r;

	if (n == 0)
	{
		return (0);
	}

	va_start(args, n);

	for (r = 0; r < n; r++)
	{
		s += va_arg(args, int);
	}

	va_end(args);

	return (s);
}
