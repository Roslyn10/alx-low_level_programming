#include "lists.h"

/**
 * free_dlistint - A function that frees a list
 * Description - Frees a list
 * @head: Pointer pointing to the head of a node
 * Return: Nothing
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;
	dlistint_t *next_node;

	while (current != NULL)
	{
		next_node = current->next;

		free(current);

		current = next_node;
	}
}
