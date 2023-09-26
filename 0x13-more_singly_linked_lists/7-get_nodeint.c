#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *get_nodeint_at_index - A function that returns the nth node of node of list
 * Description - Returns the nth node of a listint_t linked list
 * @head: Pointer to head of list
 * @index: Index of the node
 * Return: NULL is the node does not exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *q;
	unsigned int d = 0;

	q = head;

	while (q != NULL)
	{
		if (d == index)
		{
			return (q);
		}
		q = q->next;
		d++;
	}

	return (NULL);
}
