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
	dlistint_t *newnode;
	dlistint_t *head;
	unsigned int j;

	newnode = NULL;
	if (idx == 0)
	{
		newnode = add_dnodeint(h, n);
	}
	else
	{
		head = *h;
		j = 1;
		if (head != NULL)
		{
			while (head->prev != NULL)
			{
				head = head->prev;
			}
		}
		while (head != NULL)
		{
			if (j == idx)
			{
				if (head->next == NULL)
				{
					newnode = add_dnodeint_end(h, n);
				}
				else
				{
					newnode = malloc(sizeof(dlistint_t));
					{
						if (newnode != NULL)
						{
							newnode->n = n;
							newnode->next = head->next;
							newnode->prev = head;
							head->next->prev = newnode;
							head->next = newnode;
						}
					}
				}
				head = head->next;
				j++;
			}
		}
	}
	return (newnode);
}
