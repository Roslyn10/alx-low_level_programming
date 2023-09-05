#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * free_grid - Frees 2d grid previously created in alloc_grid
 * Description - Frees 2D grid previously created in alloc_grid
 * @grid: Given array
 * @height: Height of 2D grid
 */
void free_grid(int **grid, int height)
{
	int g;

	for (g = 0; g < height; g++)
	{
		free(grid[g]);
	}

	free(grid);
}
