#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * list_len - A function that returns the number of elements in alinked list_t
 * Decription - Returns the number of elements in a linked list_t lsit
 * @h: Pointer
 * Return: The number of elements
 */

size_t list_len(const list_t *h)
{
	int g = 0;
	const list_t *current = h;

	if (current == NULL)
	{
		return (0);
	}


	while (current !=  NULL)
	{
		g++;
		current = current->next;
	}

	return (g);
}
