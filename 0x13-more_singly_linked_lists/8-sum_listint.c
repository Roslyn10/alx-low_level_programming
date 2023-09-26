#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * sum_listint - A function that returns the sum of all the data of a list
 * Description - Returns the sum of all the data (n) of a listint_t list
 * @head: Pointer to head of list
 * Return: 0 if list is empty, or sum of all the data
 */

int sum_listint(listint_t *head)
{
	listint_t *w;
	unsigned int s = 0;

	w = head;

	while (w != NULL)
	{
		s += w->n;
		w = w->next;
	}

	return (s);
}
