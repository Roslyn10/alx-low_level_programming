#include "lists.h"

/**
 * add_dnodeint_end - A function that adds a new node at the end of a list
 * Description - Adds a new node at the end of a list
 * @head: Pointer to a pointer to the head
 * @n: The data in the list
 * Return: NULL if it failed, or the new_nodes address
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	dlistint_t *tmp = *head;

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->prev = NULL;

	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
		return (new_node);
	}

	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	tmp->next = new_node;
	new_node->prev = tmp;

	return (new_node);
}
