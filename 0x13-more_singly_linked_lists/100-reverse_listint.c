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
	listint_t *n_n = NULL;

	while (cur != NULL)
	{
		n_n = cur->next;
		cur->next = p;
		p = cur;
		cur = n_n;
	}

	*head = p;
	return (*head);
}
