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
	const listint_t *h; /**slow pointer**/
	const listint_t *c_l; /**fastpointer**/

	if (head == NULL)
	{
		return (0);
	}

	h = head;
	c_l = head;

	while (h != NULL && h->next != NULL && h->next != NULL)
	{
		printf("[%p] %d\n", (void *)c_l, c_l->n);

		c_l = c_l->next;
		h = h->next->next;

		if (c_l == h)
		{
			printf("-> [%p] %d\n", (void *)c_l, c_l->n);
			return (98);
		}
	}

	return (0);
}
