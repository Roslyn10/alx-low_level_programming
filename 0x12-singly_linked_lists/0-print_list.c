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
	const list_t *current = h;
	size_t p_i;

	if (current == NULL)
	{
		printf("[0] (nil)\n");
		return (0);
	}

	p_i = 0;

	while (current != NULL)
	{
		printf("[%ld] %s\n", p_i, current->str);
		f++;
		current = current->next;
		p_i++;
	}

	return (f);
}
