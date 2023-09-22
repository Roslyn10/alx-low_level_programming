#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_node_end - A function that adds a new node at the end of a list_t list
 * Description- Adds a new node at the end of a list_t list
 * @head: Double poiner
 * @str: Given string
 * Return: Address of the new node or NULL if failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *nd;
	list_t *t = *head;
	unsigned int len = 0;

	while (str[len])
	{
		len++;
	}

	nd = malloc(sizeof(list_t));
	if (nd == NULL)
	{
		return (NULL);
	}

	nd->str = strdup(str);
	nd->len = len;
	nd->next = NULL;

	if (*head == NULL)
	{
		*head = nd;
		return (nd);
	}

	while (t->next)
	{
		t = t->next;
	}

	t->next = nd;

	return (nd);
}
