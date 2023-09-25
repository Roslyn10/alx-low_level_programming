#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * listint_len - A function that returns the number os elements in linked list
 * Description - Returns the number of elements in a linked listint_t list
 * @h: Pointer to head of list
 * Return: The number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t r = 0;

	while (h != NULL)
	{
		r++;
		h = h->next;
	}

	return (r);
}
