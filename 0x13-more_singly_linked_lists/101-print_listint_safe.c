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
	const listint_t *cur = head;
	size_t n_c = 0;

	while (cur != NULL)
	{
		printf("[%p} %d\n", (void *)cur, cur->n);

		cur = cur->next;
		n_c++;
	}

	return (n_c);
}
