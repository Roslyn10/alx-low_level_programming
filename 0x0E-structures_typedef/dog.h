#ifdef DOG_H
#define DOG_H

#include <stdio.h>

/**
 * my_dog.name - Assiges a name to the dog
 * my_dog.age - Assigns an age to the dog
 * my_do.owner - Assigns an owner to the dog
 */

struct dog
{
	char *name;
	double age;
	char *owner;
};

#endif
