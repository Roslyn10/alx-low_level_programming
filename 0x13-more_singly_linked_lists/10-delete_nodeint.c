#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - A function that deletes the node at index of list
 * Description - Deletes the node at index *index* of a listint_t linked list
 * @head:
 * @index:
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
