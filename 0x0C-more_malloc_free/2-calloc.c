#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * void *_calloc - Allocates memory for an array, using malloc
 * Description - Allocated memory fro an array, using malloc
 * @nmemb: Number of elemnts in the arry
 * @size: Size of each element
 * Return: NULL if nmemb or size is 0 and when malloc fails
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int z;
	char *k;
	unsigned int t;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	t = nmemb * size;

	k = (char *)malloc(t);

	if (k == NULL)
	{
		return (NULL);
	}

	for (z = 0; z < t; z++)
	{
		k[z] = 0;
	}

	return (k);
}
