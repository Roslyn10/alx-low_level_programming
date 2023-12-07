#include "lists.h"

/**
 * print_dlistint - A function that prints all the elements of a list
 * Description - Prints all the elements of a list
 * @h:
 * Return:
 */

size_t print_dlistint(const dlistint_t *h)
{
	struct Node* current = head;

	while (current != NULL)
	{
		printf("%d ", current->data);
		current = current->next;

	}
}
