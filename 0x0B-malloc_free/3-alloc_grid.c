#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * **alloc_grid - Returns a pointer to a 2D array of integers
 * @width: Width of grid
 * @height: Height of grid
 * Description - Returns a pointer to a 2d array of integers
 * Return: NULL if 0 if height or width is negative or 0
 */
int **alloc_grid(int width, int height)
{
	int **g;
	int y, q;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	g = (int **)malloc(height * sizeof(int *));
	if (g == NULL)
	{
		return (NULL);
	}

	for (y = 0; y < height; y++)
	{
		g[y] = (int *)malloc(sizeof(int) * width);
		

		if (g[y] == NULL)
		{
			for (q = 0; q < y; q++)
			{
				free(g[y]);
			}

			free(g);
			return (NULL);
		}
	}

	for (y = 0; y < height; y++)
	{
		for (q = 0; q < width; q++)
		{
			g[y][q] = 0;
		}
	}

	return (g);
}
