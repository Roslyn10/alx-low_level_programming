#include <string.h>
#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * *_realloc - Reallocated a memory block using malloc and free
 * Desription - Reallocates a memory block using malloc and free
 * @ptr: Pointer to memory that should be rellocted
 * @old_size: Current allocated memory block
 * @new_size: Desired size of memory block
 * Return: NULL if new_size is = 0, and ptr != NULL
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *n_p;
	size_t c_s;

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
	{
		return (malloc(new_size));
	}

	if (new_size == old_size)
	{
		return (ptr);
	}

	n_p = malloc(new_size);
	if (n_p == NULL)
	{
		return (NULL);
	}

	c_s = (size_t)((old_size < new_size) ? old_size : new_size);
	memcpy(n_p, ptr, c_s);

	free(ptr);

	return (n_p);
}
