#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_dog - Sets Poppy free
 * Description - Sets the poochie free
 * @d: Pointer to dog_t
 * Return: 0 Always (Success)
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{

	free(d->name);
	free(d->owner);
	free(d);

	}
}
