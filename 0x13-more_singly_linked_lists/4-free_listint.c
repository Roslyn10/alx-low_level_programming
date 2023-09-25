#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_listint - A function that frees a list
 * Description - Frees a listint_t list
 * @head: Pointer to the first node
 * Return: Nothing
 */

void free_listint(listint_t *head)
{
	listint_t *d; /**traverses through the list**/

	while (head != NULL)
	{
		d = head;
		head = head->next;
		free(d);
	}
}
