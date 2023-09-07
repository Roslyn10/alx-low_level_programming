#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * *array_range - Creates an array of integers
 * Description - Creates an array of integers
 * @min: Minimum number of intgers
 * @max: Maximum number of integers
 * Return: NULL if min > max and when malloc fails
 */
int *array_range(int min, int max)
{
	int f;
	int *l;
	int ne;

	if (min > max)
	{
		return (NULL);
	}

	ne = max - min + 1;

	l = (int *)malloc(ne * sizeof(int));
	if (l == NULL)
	{
		return (NULL);
	}

	for (f = 0; f < ne; f++)
	{
		l[f] = min + f;
	}

	return (l);
}
