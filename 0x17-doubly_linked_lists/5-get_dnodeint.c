#include "lists.h"

/**
 * get_dnodeint_at_index - A function that returns the nth node of a list
 * Description 0 Returns the nth node of a list
 * @head: The pointer to the head of the list
 * @index: The position of the node
 * Return: NULL
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;
	unsigned int count = 0;

	while (current != NULL)
	{
		if (count == index)
		{
			return (current);
		}
		count++;
		current = current->next;
	}

	return (NULL);
}
