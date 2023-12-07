#include "lists.h"

/**
 * print_dlistint - A function that prints all the elements of a list
 * Description - Prints all the elements of a list
 * @h:
 * Return:
 */

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *current = h;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current-> next;
	}

	current = h;
	while (current->next != NULL)
	{
		current = current->next;
	}

	while (current != NULL)
	{
		current = current->prev;
	}

	return (0);
}
