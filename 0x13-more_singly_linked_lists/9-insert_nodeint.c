#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *insert_nodeint_at_index - A function that inserts a node at given position
 * Description - Inserts a new node at a given position
 * @head:
 * #idx:
 * @n:
 * Returns: the address of the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
