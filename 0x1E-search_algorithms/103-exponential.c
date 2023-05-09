#include "search_algos.h"

/**
 * exponential_search - searches for a value in a sorted array of integers
 * using the Exponential search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in the array
 * @value: value to search for
 * Return: first index where value is located or -1 if value is not present
 * in array or if array is NULL
 */

int exponential_search(int *array, size_t size, int value)
{
	size_t bound = 1, low = 0, high = size - 1, index = 0;

	/* check if array is NULL or size is 0 */
	if (array == NULL || size == 0)
		return (-1);

	/* exponential search */
	while (bound < size && array[bound] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", bound, array[bound]);
		bound *= 2;
	}

	/* binary search */
	if (bound < size)
		high = bound;
	else
		high = size - 1;
	low = bound / 2;
	printf("Value found between indexes [%lu] and [%lu]\n", low, high);
	while (low <= high)
	{
		/* print array */
		printf("Searching in array: ");
		for (index = low; index <= high; index++)
		{
			printf("%d", array[index]);
			if (index != high)
				printf(", ");
		}
		printf("\n");

		/* calculate mid */
		bound = (low + high) / 2;
		/* check if value is found, return index */
		if (array[bound] == value)
			return (bound);
		/* check if value is in left half */
		else if (array[bound] > value)
			high = bound - 1;
		/* check if value is in right half */
		else
			low = bound + 1;
	}

	/* if value not found, return -1 */
	return (-1);
}
