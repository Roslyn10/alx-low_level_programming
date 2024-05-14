#include "lists.h"

/**
 * insert_dnodeint_at_index - A function that inserts a new node at a given position
 * Description - Inserts a new node at a given position
 * @h:
 * @idx:
 * @n:
 * Return:
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newNode = createNode(n);
	dlistint_t *current = *h;
	unsigned int count = 0;

	if (newNode == NULL)
	{
		return (NULL);
	}

	if (*h == NULL && idx != 0)
	{
		return (NULL);
	}

	if (idx == 0)
	{
		newNode->next = *h;
		if (*h != NULL)
		{
			(*h)->prev = newNode;
		}
		*h = newNode;
		return (newNode);
	}

	while (current != NULL & count < idx - 1)
	{
		current = current->next;
		count++;
	}

	if (current == NULL)
	{
		free(newNode);
		return (NULL);
	}

	newNode->next = current->next;
	newNode->prev = current;
	if (current->next != NULL)
	{
		current->next->prev = newNode;
	}
	current->next = newNode;

	return (newNode);
}
