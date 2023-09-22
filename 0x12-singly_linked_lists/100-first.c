#include <stdio.h>
#include "lists.h"

void first_message(void) __attribute__((constructor));

/**
 * first_message - Prints a message before the main function
 * Description- Prints a message before main() function
 * REturn: Nothing
 */

void first_message(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
