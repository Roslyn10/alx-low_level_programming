#include "lists.h"

/**
 * add_dnodeint - A function that adds a new node at the beginning of a list
 * Description - Adds a new node at the beginning of a list
 * @head: Head of the struct
 * @n: Integer value
 * Return: Address of the new element or NULL if failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode = malloc(sizeof(dlistint_t));

	if (newNode == NULL)
	{
		return (NULL);
	}

	newNode->n = n;
	newNode->next = *head;
	newNode->prev = NULL;

	if (*head != NULL)
	{
		(*head)->prev = newNode;
	}

	*head = newNode;

	return (newNode);
}
