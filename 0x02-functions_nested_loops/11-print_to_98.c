#include "main.h"
#include <stdio.h>
/**
 * void print_to_98 - Prints from n to 98
 * Description: Prints natural numbers from n to 98
 * Return: void
 * @n: Starting point/ First natural number
 */
void print_to_98(int n)
{
	while (n <= 98)
	{
		printf("%d", n);
		if (n != 98)
		{
			printf(", ");
		}
		n++;
	}
	if ( n >= 98, n--);

	printf("\n");
}
