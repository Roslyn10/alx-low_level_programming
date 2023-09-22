#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * free_list - A function that frees a list_t list
 * Description - Frees a list_t list
 * @head: Pointer
 * Retun: Nothing
 */

void free_list(list_t *head)
{
	list_t *current = head;
	list_t *t;

	while (current != NULL)
	{
		t = current;
		current = current->next;
		free(t->str);
		free(t);
	}
}
