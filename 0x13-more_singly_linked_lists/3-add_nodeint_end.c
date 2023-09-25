#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * *add_nodeint_end - A function that adds a new node at the end of a list
 * Descrition: Adds a new node at the end of a listint_t list
 * @head:
 * @n:
 * Return: the address of the new element, or NULL if failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
