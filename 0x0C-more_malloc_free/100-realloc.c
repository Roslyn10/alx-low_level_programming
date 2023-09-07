#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * *_realloc - Reallocated a memory block using malloc and free
 * Desription - Reallocates a memory block using malloc and free
 * @ptr:
 * @old_size:
 * @new_size:
 * Return: NULL if new_size is = 0, and ptr != NULL
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
