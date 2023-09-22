#include <stdio.h>
#include "main.h"
/**
 * main - Finds and prints the first 98 numbers in Fib sequence
 * DEscription - Prints the first 98 numbers in fibo seq, starting with 1 and 2
 * Return: 0 Always (Success)
 */
int main(void)
{
	unsigned long int q;
	unsigned long int d = 1;
	unsigned long int z = 2;
	unsigned long int k = 1000000000;
	unsigned long int e;
	unsigned long int f;
	unsigned long int g;
	unsigned long int h;

	printf("%lu", d);

	for (q = 1; q < 91; q++)
	{
		printf(", %lu", z);
		z += d;
		d = z - d;
	}

	e = (d / k);
	f = (d % k);
	g = (z / k);
	h = (z % k);

	for (q = 92; q < 99; ++q)
	{
		printf(", %lu", g + (h / k));
		printf("%lu", h % k);
		g = g + e;
		e = g - e;
		h = h + f;
		f = h - f;
	}
	printf("\n");
	return (0);
}
