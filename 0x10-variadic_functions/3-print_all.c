#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include "variadic_functions.h"

/**
 * print_all - Prints anything
 * Description - A function that prints anything
 * @format: List of given arguments
 */
void print_all(const char * const format, ...)
{
	int p = 0;

	char *st, *s = "";

	va_list l;

	va_start(l, format);

	if (format)
	{
		while (format[p])
		{
			switch (format[p])
			{
				case 'c':
					printf("%s%c", s, va_arg(l, int));
					break;
				case 'i':
					printf("%s%f", s, va_arg(l, double));
						break;
				case 's':
					st = va_arg(l, char*);
					if (!st)
						st = "(nil)";
					printf("%s%s", s, st);
					break;
				default:
					p++;
					continue;
			}
			s = ",";
			p++;
		}
	}

	printf("\n");
	va_end(l);
}
