#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * init_dog - Initializes a ariable of type struct dog
 * Description - A poochie (hypocaristic of dog)
 * @d: 
 * @name:
 * @age:
 * @owner:
 * Return: 0 Always (Succes)
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d -> name = name;
	d -> age = age;
	d -> owner = owner;;
}
