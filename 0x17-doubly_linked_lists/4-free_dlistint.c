#include "lists.h"

/**
 * free_dlistint - A function that frees a list
 * Description - Frees a list
 * @head: Pointer to the head of the list
 * Return: Nothing
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
