#include <stdio.h>
#include "main.h"
/**
 * main - Finds and prints the first 98 numbers in Fib sequence
 * DEscription - Prints the first 98 numbers in fibo seq, starting with 1 and 2
 * Return: 0 Always (Success)
 */
int main(void)
{
	unsigned long d = 1;
	unsigned long e = 2;
	unsigned long z;
	int v;

	printf("%lu, %lu", d, e);

	for (v = 3; v <= 98; v++)
	{
		z = d + e;

		printf(" %lu", z);

		if (v < 98)
		{
			printf(", ");
		}

		d = e;
		e = z;
	}

	printf("\n");

	return (0);
}
