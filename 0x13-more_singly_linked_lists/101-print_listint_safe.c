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
	size_t g = 0; /**Keep track of nodes**/
	const listint_t *h = head; /**Current node**/
	const listint_t *c_l; /**Check loop**/

	while (h != NULL)
	{
		g++;
		h = h->next;

		if (c_l != NULL)
		{
			c_l = c_l->next;
			if (c_l != NULL)
			{
				c_l = c_l->next;
			}
			else
			{
				break;
			}
		}
		if (h == c_l)
		{
			exit(98);
		}
		
		printf("[%p] %ld\n", (void*)h, g);
	}

	return (g);
}
