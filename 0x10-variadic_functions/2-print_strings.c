#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include "variadic_functions.h"

/**
 * print_strings - Prints strings
 * Description - Afunction that prints strings, followed by a new line
 * @separator: Given string
 * @n: Parameters passed
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ar;
	unsigned int h;
	const char *st;

	va_start(ar, n);

	for (h = 0; h < n; h++)
	{
		st = va_arg(ar, const char *);

		if (st != NULL)
		{
			printf("%s", st);
		}
		else
		{
			printf("nil)");
		}

		if (h < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}

	va_end(ar);
	printf("\n");
}
