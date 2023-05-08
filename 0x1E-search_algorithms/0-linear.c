#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of integers using the
 * Linear search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: first index where value is located, or -1 if value is not present
 * in array or if array is NULL
 */

int linear_search(int *array, size_t size, int value)
{
	/* declare variables */
	size_t index;

	/* check if array is NULL */
	if (array == NULL)
		return (-1);

	/* loop through array */
	for (index = 0; index < size; index++)
	{
		/* print value checked */
		printf("Value checked array[%lu] = [%d]\n", index, array[index]);
		/* check if value is found, return index */
		if (array[index] == value)
			return (index);
	}

	/* if value not found, return -1 */
	return (-1);
}
