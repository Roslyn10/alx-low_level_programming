#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *get_nodeint_at_index - A function that returns the nth node of node of list
 * Description - Returns the nth node of a listint_t linked list
 * @head:
 * @index:
 * Return: NULL is the node does not exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{