#include <stdio.h>
#include "main.h"
/**
 * main - Finds and prints the first 98 numbers in Fib sequence
 * DEscription - Prints the first 98 numbers in fibo seq, starting with 1 and 2
 * Return: 0 Always (Success)
 */
int main(void)
{
	int h = 98;
	unsigned int d = 1;
	unsigned int e = 2;
	unsigned int z;

	printf("%u, %u, ", d, e);

	int v;

	for (v = 3; v <= 98; v++)
	{
		z = d + e;

		printf("%u", z);

		if (v < 98)
		{
			printf(",");
		}

		d = e;
		e = z;
	}

	printf("\n");

	return (0);
}
