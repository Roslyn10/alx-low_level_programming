#include "lists.h"

/**
 * print_dlistint - A function that prints all the elements of alist
 * Description - Prints all the elements of a list
 * @h: Head of the list
 * Return: The number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *current = h;
	size_t node_count = 0;

	if (h == NULL)
	{
		return (node_count);
	}

	while (current != NULL)
	{
		current = current->next;
		node_count++;
	}

	return (node_count);
}
