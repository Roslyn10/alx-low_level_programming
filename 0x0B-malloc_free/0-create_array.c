#include "main.h"
#include <stlib.h>
#include <stdio.h>

/**
 * *create_array - Creates an array of characters
 * Description - Creates an array of characters, and initializes it with a char
 * @size: Unsigned int
 * @c: Character parameter
 * Return: NULL if size is 0 or it fails and returns a pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int r;

	if (size == 0)
	{
		return (NULL);
	}

	arr = (char *)malloc(size * sizeof(char));

	if (arr == NULL)
	{
		return (NULL);
	}

	for (r = 0; r < size; r++)
	{
		arr[r] = c;
	}

	return (arr);
}
