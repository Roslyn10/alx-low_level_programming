#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - Prints a struct dog
 * Description - Prints a poochie
 * @d: Pointer to struct dog and init_dog
 * Return: nil if any element is NULL and nothing if d is NULL
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		printf(" ");
		return;
	}
	if (d->name == NULL)
	{
		d->name = "(nil)";
	}
	if (d->owner == NULL)
	{
		d->owner = "(nil)";
	}
	else
	{
		printf("Name: %s\n", d->name);
		printf("Age: %.1f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}
}
