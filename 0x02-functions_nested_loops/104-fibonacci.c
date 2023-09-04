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

	whiel (1)
	{
		z = d + e;

		if (z > 7963007762452793327ULL)
			break;

		printf(", %llu", z);

		d = e;
		e = z;
	}

	printf("\n");

	return (0);
}
