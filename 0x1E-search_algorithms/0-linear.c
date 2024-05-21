#include "search_algos.h"

/**
 * linear_search - A function that searchers for a value using linear search
 * Description - Searches for a value in an array using linear search algorithm
 * @array: A pointer to the first element of the array to search in
 * @size: The number of elements in array
 * @value: The value to search for
 * Return: Index where value is located
 */

int linear_search(int *array, size_t size, int value)
{
	int s;

	if (array == NULL)
	{
		return (-1);
	}

	for (s = 0; s < (int)size; s++)
	{
		printf("Value checked array[%u] = [%d]\n", s, array[s]);
		if (array[s] == value)
		{
			return (s);
		}
	}

	return (-1);
}
