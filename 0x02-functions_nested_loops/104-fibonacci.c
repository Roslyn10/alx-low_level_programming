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

	for(v = 3; v <= 98; v++)
	{
		z = d + e;
		d = e;
		e = z;

		printf(", %lu", e);
	}

	printf("\n");

	return (0);
}
