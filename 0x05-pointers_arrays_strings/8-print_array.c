#include <stdio.h>
#include "main.h"
/**
 * print_array - Prints the elements of an array
 * Description - Prints n elements of an array of integers
 * Return: 0 Always(Success)
 * @a: Given integer
 * @n: Number of elements
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n  ; i++)
	{
		printf("%d", a[i]);

		if (i < n - 1)
		{
			printf(", ");
		}

	}
	printf("\n");
}
