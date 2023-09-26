#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - A function that deletes the node at index of list
 * Description - Deletes the node at index *index* of a listint_t linked list
 * @head: Pointer to pointer to head of list
 * @index: The node that should be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	if (head == NULL)
	{
		return (-1);
	}


