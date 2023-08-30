#include "main.h"
/**
 * print_diagsums - Prints the sum of two diagonals of a square matrix
 * Decription - Prints sum of two diagonals of a square matrix of integers
 * @a: Pointer
 * @size: Size of the matrix
 */
void print_diagsums(int *a, int size)
{
	int s;
	int d;
	int u;

	for (u = 0; u < size; u++)
	{
		s += a[u * size + u];
		d += a[u * size + (size - 1 - u)];
	}

	printf("%d, ", s);
	printf("%d", d);
}
