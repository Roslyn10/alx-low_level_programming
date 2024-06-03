#include "lists.h"

/**
 * insert_dnodeint_at_index - A function that inserts a new node at...
 * ... a given position
 * Description - Inserts a new node at a given position
 * @h: Pointer to the head of the list
 * @idx: The list where the new node shoule be added
 * @n: The data of the new node
 * Return: NULL if it failed or the address of the new node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newnode;
	dlistint_t *current;
	unsigned int j;

	if (h == NULL)
		return (NULL);

	if (idx == 0)
		return (add_dnodeint(h, n));

	current = *h;
	j = 0;

	while (current != NULL && j < idx - 1)
	{
		current = current->next;
		j++;
	}

	if (current == NULL || current->next == NULL)
		return (add_dnodeint_end(h, n));

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->next = current->next;
	newnode->prev = current;
	if (current->next != NULL)
		current->next->prev = newnode;
	current->next = newnode;

	return (newnode);
}
