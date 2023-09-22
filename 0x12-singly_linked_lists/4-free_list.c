#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * free_list - A function that frees a list_t list 
 * Description - Frees a list_t list
 * @head:
 * Retun:
 */

void free_list(list_t *head)
{
	list_t *cureent = head;
	list_t *t;

	while (current != NULL)
	{
		temp = current;
		current = current->next;
		free(t->str);
		free(t);
	}
}
