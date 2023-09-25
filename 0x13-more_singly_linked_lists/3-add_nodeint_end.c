#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * *add_nodeint_end - A function that adds a new node at the end of a list
 * Descrition: Adds a new node at the end of a listint_t list
 * @head: Pointer to head of list
 * @n: Holds the int value
 * Return: the address of the new element, or NULL if failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode;
	listint_t *d; /** used to traverse the list **/

	newnode = malloc(sizeof(listint_t));

	if (newnode == NULL)
	{
		return (NULL);
	}

	newnode->n = n;
	newnode->next = NULL;

	if (*head == NULL)
	{
		*head = newnode;
	}
	else
	{
		d = *head;
		while (d->next != NULL)
		{
			d = d->next;
		}
		d->next = newnode;
	}

	return (newnode);
}
