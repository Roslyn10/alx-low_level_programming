#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint - A function that prints all elements of a list
 * Description - Prints all elements of a listint_t list
 * @listint_t:
 * @h: Pointer to head of list
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t t_n = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		t_n++;
		h = h->next;
	}

	return (t_n);
}
