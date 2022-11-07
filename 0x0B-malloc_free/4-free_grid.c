#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2 dimensional grid
 * @grid: a pointer to a pointer 2d array
 * @height: size of 2d array
 * Return: void
 */


void free_grid(int **grid, int height)
{
	int grid_index;

	for (grid_index = 0; grid_index < height; grid_index++)
		free(grid[grid_index]);

	free(grid);
}
