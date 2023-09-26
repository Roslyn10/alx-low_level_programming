#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *reverse_listint - A function that reverses a linked list
 * Description - Reverses a lisntint_t list
 * @head: Pointer to pointer to heaad of list
 * Return: a pointer to the first node of the reverses list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *p = NULL;
	listint_t *cur = *head;

	while (cur != NULL)
	{
		*head = cur->next;
		cur->next = p;
		p = cur;
		cur = *head;
	}

	*head = p;
	return (*head);
}
