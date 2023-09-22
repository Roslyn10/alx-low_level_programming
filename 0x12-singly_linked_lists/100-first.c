#include <stdio.h>
#include "lists.h"

void first_message(void) __attribute__((constructor));

/**
 * first_message - 
 * Description- 
 * REturn: Nothing
 */

void first_message(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
