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
	unsigned int len = 0;

	while (str[len])
	{
		len++;
	}

	nd = malloc(sizeof(list_t));

	if (nd != NULL)
	{
		return (NULL);
	}

	nd->str = strdup(str);
	nd->len = len;
	nd->next = (*head);
	(*head) = nd;

	return (*head);
}
