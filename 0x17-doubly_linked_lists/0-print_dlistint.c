#include "lists.h"

/**
 * print_dlistint - A function that prints all the elements of alist
 * Description - Prints all the elements of a list
 * @h: Head of the list
 * Return: The number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	int node_counter = 0;

	if (h == NULL)
	{
		return (node_counter);
	}

	while (h->prev != NULL)
	{
		h = h->prev;
	}

	while (h != NULL)
	{
		node_counter++;
		h = h->next;
	}

	return (node_counter);
}
