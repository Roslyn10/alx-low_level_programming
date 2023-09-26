#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *reverse_listint - A function that reverses a linked list
 * Description - Reverses a lisntint_t list
 * @head: Pointer to pointer to heaad of list
 * Return: a pointer to the first node of the reverses list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *p = NULL; /**Previous node**/
	listint_t *c = *head; /**Current node**/
	listint_t *n_n; /**New node**/

	while (c != NULL)
	{
		n_n = c->next;
		c->next = p;
		c = n_n;
	}

	*head = p;
	return (*head);
}

/**
 * print_reverse - A function that prints a list in reverse
 * Description - Prints a list in revers
 * @head: Pointer to head of list
 * Return: Nothing
 */

void print_reverse(listint_t *head)
{
	listint_t *cur = head;
	
	while (cur != NULL)
	{
		printf("%d", cur->n);
		cur = cur->next;
	}
}
