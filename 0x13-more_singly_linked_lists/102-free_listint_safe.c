#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * free_listint_safe - A function that fres a list
 * Description - Frees a listint_t list
 * @h:
 * Return: the size of the list that was free'd
 */

size_t free_listint_safe(listint_t **h)
{
	listint_t *f = *h; /**traverses the list**/
	size_t a = 0; /**keeps track of size**/
	listint_t *n_n; /**next node**/

	while (f != NULL)
	{
		n_n = f->next;

		free(f);
		a++;
		
		f = n_n;
	}

	*h = NULL;
	return (a);
}
