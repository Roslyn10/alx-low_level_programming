#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *find_listint_loop - A function that finds the loop in a list
 * Description Finds the loop in a linked list
 * @head:
 * Returns: the address of the node where the loop starts,
 * or NULL if there is not loop
 */

listint_t *find_listint_loop(listint_t *head)
{
