#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * void *malloc_checked - Allocated memory using malloc
 * Description - Allocates memory using malloc
 * @b: Number of bytes
 * Return: Pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *d;

	d = malloc(b);

	if (d == NULL)
	{
		exit(98);
	}
	return (d);
}
