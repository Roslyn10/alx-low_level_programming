#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint_safe - A function that prints a linked list
 * Description - Printsa listint_t linked list
 * @head: Pointer to head of list
 * Return: the number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *t , *h;
	size_t c = 0;

	t = head;
	h = head;

	while (h != NULL && h->next != NULL)
	{
		t = t->next;
		h = h->next->next;

		if (t == h)
		{
			exit(98);
		}

		printf("[%p] %d\n", (void *)t, t->n);
		c++;
	}

	if (h == NULL || h->next == NULL)
	{
		while (h != NULL)
		{
			printf("[%p] %d\n", (void *)h, h->n);
			h = h->next;
			c++;
		}
	}

	return (c);
}
