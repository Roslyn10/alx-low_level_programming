#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - Returns the index of the first element for which the cmp
 * Description - Searchers for an integer
 * @size: The number of elements in the array array
 * @array: The array
 * @cmp: The pointer to the function to be used to compare values
 * Return: -1 if no element matches, and when 0 is -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
