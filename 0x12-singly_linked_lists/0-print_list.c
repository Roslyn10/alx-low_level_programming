#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_list - A function that prints all the elements of a list_t list
 * Description - Prints all the elements of a list_t list
 * @h: Counts the number of nodes in the code
 * Return: The number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t f = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%lu] %s\n", f, h->str);
		}

		h = h->next;
		f++;
	}

	return (f);
}
