#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * pop_listint - A function that deletes the head node of a linked list
 * Description - Deletes the head and returns the head node's data (n)
 * @head: Pointer to a pointer to head of list
 * Return: 0 if linked list is empty
 */

int pop_listint(listint_t **head)
{
	listint_t *t;
	int c;

	if (head == NULL || *head == NULL)
	{
		return (0);
	}

	t = *head;
	*head = t->next;
	c = t->n;
	free(t);
	return (c);
}
