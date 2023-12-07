#include "lists.h"

/**
 * add_dnodeint_end - A function that adds a new node at the end of a list
 * Description - Adds a new node at the end of a list
 * @head: Head of the struct
 * @n: Integer value
 * Return: NULL / newNode
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newNode = malloc(sizeof(dlistint_t));
	dlistint_t *current;

	if (newNode == NULL)
	{
		return (NULL);
	}

	newNode->n = n;
	newNode->next = NULL;

	if (*head == NULL)
	{
		newNode->prev = NULL;
		*head = newNode;
	}
	else
	{
		current = *head;
		while (current->next != NULL)
		{
			current = current->next;
		}

		current->next = newNode;
		newNode->prev = current;
	}
	return (newNode);
}
