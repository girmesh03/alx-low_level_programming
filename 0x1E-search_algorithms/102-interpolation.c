#include "search_algos.h"

/**
 * interpolation_search - searches for a value in a sorted array of integers
 * using the Interpolation search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in the array
 * @value: value to search for
 * Return: first index where value is located or -1 if value is not present
 * in array or if array is NULL
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0, high = size - 1, pos = 0;

	/* check if array is NULL or size is 0 */
	if (array == NULL || size == 0)
		return (-1);

	/* interpolation search */
	while (low <= high)
	{
		/* calculate the probe position */
		pos = low + (((double)(high - low) / (array[high] - array[low])) *
					 (value - array[low]));

		/* check if pos is out of range */
		if (pos > size - 1)
		{
			printf("Value checked array[%lu] is out of range\n", pos);
			break;
		}

		printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);
		/* if value is present at pos, return the pos */
		if (array[pos] == value)
			return (pos);
		/* if value is larger, pos is in upper half */
		if (array[pos] < value)
			low = pos + 1;
		/* if value is smaller, pos is in lower half */
		if (array[pos] > value)
			high = pos - 1;
	}

	/* if value is not present in array return -1 */
	return (-1);
}
