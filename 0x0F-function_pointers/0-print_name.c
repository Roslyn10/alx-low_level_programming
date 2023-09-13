#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - Prints a name
 * Description - Prints a name
 * @name: The given name
 * @f: Pointer
 * Return: Nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	{
		return;
	}
	f(name);
}
