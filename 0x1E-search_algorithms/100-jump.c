#include "search_algos.h"

/**
 * jump_search - searches for a value in a sorted array of integers
 * using the Jump search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in the array
 * @value: value to search for
 * Return: first index where value is located or -1 if value is not present
 * in array or if array is NULL
 */

int jump_search(int *array, size_t size, int value)
{
	size_t i, jump, low = 0;

	/* check if array is NULL or size is 0 */
	if (array == NULL || size == 0)
		return (-1);

	/* set jump size */
	jump = sqrt(size);

	/* jump search */
	for (i = 0; i < size; i += jump)
	{
		if (array[i] == value)
		{
			/* return (i); */
			break;
		}
		if (array[i] < value)
			low = i;
		if (array[i] > value)
			break;
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
	}

	printf("Value found between indexes [%lu] and [%lu]\n", low, i);
	/* linear search between the interval */
	for (i = low; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	/* if value is not present in array return -1 */
	return (-1);
}
