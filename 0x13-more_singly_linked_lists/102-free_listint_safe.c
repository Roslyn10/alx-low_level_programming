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
