#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * *array_range - Creates an array of integers
 * Description - Creates an array of integers
 * @min:
 * @max:
 * Return: NULL if min > max and when malloc fails
 */
int *array_range(int min, int max)
{
