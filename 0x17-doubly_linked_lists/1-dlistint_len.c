#include "lists.h"

/**
 * dlistint_len - A function that returns the number of elements in a list
 * Description - Returns the number of elements in a list
 * @h: Head of the list
 * Return: Number of nodes in the list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t node_count = 0;

	while (h != NULL)
	{
		h = h->next;
		node_count++;
	}

	return (node_count);
}
