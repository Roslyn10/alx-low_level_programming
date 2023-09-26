#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *insert_nodeint_at_index - A function that inserts a node at given position
 * Description - Inserts a new node at a given position
 * @head: Pointer to pointer to head of list
 * @idx: The index at which new node should be added
 * @n: Value to be stored in new node
 * Return: the address of the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *r; /**New node**/
	listint_t *o; /**Traverses the list**/
	unsigned int t;

	if (head == NULL)
	{
		return (NULL);
	}

	r = malloc(sizeof(listint_t));
	if (r == NULL)
	{
		return (NULL);
	}

	r->n = n;

	if (idx == 0)
	{
		r->next = *head;
		*head = r;
		return (r);
	}

	o = *head;
	for (t = 0; t < idx - 1 && o != NULL; t++)
	{
		o = o->next;
	}

	if (o == NULL)
	{
		free(r);
		return (NULL);
	}

	r->next = o->next;
	o->next = r;

	return (r);
}
