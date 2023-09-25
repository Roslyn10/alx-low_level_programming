#include <stdio.h>
#include "lists.h"
#include <stdio.h>

/**
 * *add_nodeint - A function that adds a new node at the beginning of a list
 * Description - Adds a new node at the beginning of a listint_t list
 * @head:
 * @n:
 * Return: the address of the new elements or, NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
