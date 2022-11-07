#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: column
 * @height: row
 * Return: int pointer to 2d array
 */


int **alloc_grid(int width, int height)
{
	int row = 0;
	int column = 0;
	int **array;

	if (width <= 0 || height <= 0)
		return (NULL);

	array = malloc(height * sizeof(int *));

	if (array == NULL)
		return (NULL);

	for (row = 0; row < height; row++)
		array[row] = malloc(width * sizeof(int));

	for (row = 0; row < height; row++)
	{
		for (column = 0; column < width; column++)
		{
			array[row][column] = 0;
		}
	}

	return (array);
}
