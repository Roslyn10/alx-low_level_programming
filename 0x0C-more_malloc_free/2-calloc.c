#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * void *_calloc - Allocates memory for an array, using malloc
 * Description - Allocated memory fro an array, using malloc
 * @nmemb:
 * @size:
 * Return: NULL if nmemb or size is 0 and when malloc fails
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
