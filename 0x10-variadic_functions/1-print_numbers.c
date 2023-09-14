#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include "variadic_functions.h"

/**
 * print_numbers - Prints numbers
 * Description - A function that prints numbers, followed by a new line
 * separator: Given string
 * @n: Parameters passed
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list arg;
	unsigned int g;
	int s;

	va_start(arg, n);

	for (g = 0; g < n; g++)
	{
		s = va_arg(arg, int);

		printf("%d", s);

		if (g < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}

	va_end(arg);
	printf("\n");
}
