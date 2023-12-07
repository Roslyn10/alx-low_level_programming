#include "lists.h"

/**
 * free_dlistint - A function that frees a list
 * Description - Frees a list
 * @head: Head pointer
 * Return: Nothing
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;
	dlistint_t *newNode;

	while (current != NULL)
	{
		newNode = current->next;
		free(current);
		current = newNode;
	}
}
