#include "search_algos.h"

/**
 * binary_search - A function that searchs for a value using binary search
 * Description - Searches for a value in sorted array of integers...
 * ...using the Binary search algorithm
 * @array: A pointer to the first element of the array to search in
 * @size: The number of elements is array
 * @value: The value to search for
 * Return: Index where value is located...
 * ... or -1 if array is NULL or value is not present
 */

int binary_search(int *array, size_t size, int value)
{
	size_t low = 0;
	size_t high = size - 1;
	size_t mid, i;

	if (array == NULL)
	{
		return (-1);
	}

	while (low <= high)
	{
		printf("Searching in array: ");
		for (i = low; i <= high; i++)
		{
			if (i != low)
			{
				printf(", ");
			}
			printf("%d", array[i]);
		}
		printf("\n");

		mid = low + (high - low) / 2;

		if (array[mid] == value)
		{
			return (mid);
			printf("%d\n", array[mid]);
		}

		if (array[mid] < value)
		{
			low = mid + 1;
		}

		else
		{
			high = mid - 1;
		}
	}

	return (-1);
}
