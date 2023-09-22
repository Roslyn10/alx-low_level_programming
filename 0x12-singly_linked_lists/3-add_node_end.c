#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_node_end - A function that adds a new node at the end of a list_t list
 * DEscription- Adds a new node at the end of a list_t list
 * @head: Double poiner
 * @str: Given string
 * Return: Address of the new node or NULL if failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *nd;
	list_t *current;

	if (str == NULL)
	{
		return (NULL);
	}

	nd = (list_t *)malloc(sizeof(list_t));

	if (nd == NULL)
	{
		return (NULL);
	}

	nd->str = strdup(str);

	nd->next = NULL;

	if (*head == NULL)
	{
		*head = nd;
	}
	else
	{
		current = *head;
		while (current->next != NULL)
		{
			current = current->next;
		}

		current->next = nd;
	}

	return (nd);
}
