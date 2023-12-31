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
	char *s = "";
	char *st;
	va_list args;

	va_start(args, format);

	if (format)
	{
		while (format[p])
		{
			switch (format[p])
			{
				case 'c':
					printf("%s%c", s, va_arg(args, int));
					break;
				case 'f':
					printf("%s%f", s, va_arg(args, double));
					break;
				case 'i':
					printf("%s%d", s, va_arg(args, int));
					break;
				case 's':
					st = va_arg(args, char*);
					if (st == NULL)
					st = "(nil)";
					printf("%s%s", s, st);
					break;
				default:
					p++;
					continue;
			}
			s = ", ";
			p++;
		}
	}

	printf("\n");
	va_end(args);
}
