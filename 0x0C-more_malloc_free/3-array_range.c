#include "main.h"
#include <stdlib.h>

/**
 * array_range - Creates an array of integers.
 * @min: The first elements.
 * @max: The last elements.
 * Return: The pointer to the newly created array
 * If min > max, NULL.
 * If malloc fails, NULL.
 */

int *array_range(int min, int max)
{
	int range = 0, index;
	int *array;

	if (min > max)
		return (NULL);

	range = max - min;
	range += 1;

	array = malloc(range * sizeof(int));

	if (array == NULL)
		return (NULL);

	for (index = 0; index < range; index++)
		array[index] = min + index;

	return (array);
}
