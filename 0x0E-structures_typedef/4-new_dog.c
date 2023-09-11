#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * *new_dog - Creates a new dog
 * Description - Another poochie
 * @name: New dog's name
 * @age: New dog's age
 * @owner: New dog's owner
 * Return: 0 Always (Success)
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newdog = (dog_t *)malloc(sizeof(dog_t));

	if (newdog == NULL)
	{
		return (NULL);
	}

	newdog->name = (char *)malloc(strlen(name) + 1);
	if (newdog->name == NULL)
	{
		free(newdog);
		return (NULL);
	}
	strcpy(newdog->name, name);

	newdog->owner = (char *)malloc(strlen(owner) + 1);
	if (newdog->owner == NULL)
	{
		free(newdog->name);
		free(newdog);
		return (NULL);
	}
	strcpy(newdog->owner, owner);

	newdog->age = age;

	return (newdog);
}
