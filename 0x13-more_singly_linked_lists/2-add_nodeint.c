#include <stdio.h>
#include "lists.h"
#include <stdio.h>

/**
 * *add_nodeint - A function that adds a new node at the beginning of a list
 * Description - Adds a new node at the beginning of a listint_t list
 * @head: Pointer to pointer to head of list
 * @n: Parameter
 * Return: the address of the new elements or, NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *n_n;

	n_n = (listint_t *)malloc(sizeof(listint_t));

	if (n_n == NULL)
	{
		return (NULL);
	}

	n_n->n = n;
	n_n->next = *head;

	*head = n_n;

	return (n_n);
}
