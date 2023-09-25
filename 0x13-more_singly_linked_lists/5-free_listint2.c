#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_listint2 - A function that frees a list
 * Desription - Frees a listint_t list
 * @head: Pointer to the head
 * Return: Nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *d; /**traverses through the list**/
	listint_t *f; /**temporary pointer**/

	if (head == NULL || *head == NULL)
	{
		return;
	}

	d = *head;
	while (d != NULL)
	{
		f = d->next;
		free(d);
		d = f;
	}

	*head = NULL;
}
