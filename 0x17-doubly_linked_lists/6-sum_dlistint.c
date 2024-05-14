#include "lists.h"

/**
 * sum_dlistint - A function that returns the sum of all the data of a list
 * Description - Returns the sum of all the data of a list
 * @head: The pointer to the head of the list
 * Return: 0 if the list is empty
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *current = head;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}

	return (sum);
}
