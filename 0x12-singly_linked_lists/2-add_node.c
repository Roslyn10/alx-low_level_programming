#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * *add_node - A function that adds a new node at the beginning of  list_t list
 * Description - Adds a new node at the beginnig of a list_t list
 * @head: DOuble pointer
 * @str: Given string
 * Return: New node
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *nd;

	nd = (list_t *)malloc(sizeof(list_t));

	nd->str = strdup(str);

	if (nd->str == NULL)
	{
		free(nd);
		return (NULL);
	}

	nd->next = *head;

	*head = nd;

	return (nd);
}
