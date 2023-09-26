#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - A function that deletes the node at index of list
 * Description - Deletes the node at index *index* of a listint_t linked list
 * @head: Pointer to pointer to head of list
 * @index: The node that should be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *t;
	listint_t *c, *p;
	unsigned int e;

	if (*head == NULL)
	{
		return (-1);
	}

	if (index == 0)
	{
		t = *head;
		*head = (*head)->next;
		free(t);
		return (1);
	}

	c = *head;
	p = NULL;
	e = 0;

	while (c != NULL && e < index)
	{
		p = c;
		c = c->next;
		e++;
	}

	if (c == NULL)
	{
		return (-1);
	}

	p->next = c->next;
	free(c);
	return (1);
}
