#include "main.h"

/**
 * print_diagsums - Prints the sum of two diagonals of a square matrix
 * Decription - Prints sum of two diagonals of a square matrix of integers
 * @a: Pointer
 * @size: Size of the matrix
 */

void print_diagsums(int *a, int size)
{
	int sum1, sum2, k;

	sum1 = 0;
	sum2 = 0;

	for (k = 0; k < size; k++)
	{
		sum1 = sum1 + a[k * size + k];
	}
	for (k = size - 1; k >= 0; k--)
	{
		sum2 += a[k * size + (size - k - 1)];
	}
	printf("%d, %d\n", sum1, sum2);
}
