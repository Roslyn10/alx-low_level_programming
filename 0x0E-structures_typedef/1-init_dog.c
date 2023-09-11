#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * init_dog - Initializes a ariable of type struct dog
 * Description - Initializing a variable
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 * @d: Pointer to struct dog
 * Return: 0 Always (Succes)
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d - > name = name;
	d - > age = age;
	d - > owner = owner;
}
