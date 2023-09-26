#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *find_listint_loop - A function that finds the loop in a list
 * Description Finds the loop in a linked list
 * @head: Pointer to head of linked list
 * Returns: the address of the node where the loop starts,
 * or NULL if there is not loop
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *k;/**fast pointer**/
	listint_t *j;/**slow pointer**/

	if (head == NULL || head->next == NULL)
	{
		return (NULL);
	}

	k = head;
	j = head;

	while(k != NULL && k->next != NULL)
	{
		j = j->next;
		k = k->next->next;

		if (j == k)
		{
			j = head;
			while (j != k)
			{
				j = j->next;
				k = k->next;
			}

			return (j);
		}
	}

	return (NULL);
}
