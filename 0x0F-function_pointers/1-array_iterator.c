#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - Executes a function given as a parameter on each element
 * Description - Given as a parameter on each element of an array
 * @size: The size of the array
 * @action: A pointer to the function needed
 * Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int h;

	if (array == NULL || action == NULL)
	{
		return;
	}

	for (h = 0; h < size; h++)
	{
		action(array[h]);
	}
}
