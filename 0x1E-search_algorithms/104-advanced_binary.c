#include "search_algos.h"

/**
 * advanced_binary - searches for a value in a sorted array of integers.
 * @array: pointer to the first element of the array to search in.
 * @size: number of elements in array.
 * @value: value to search for.
 * Return: the index where value is located or -1 if value is not present
 * in array or if array is NULL.
 */

int advanced_binary(int *array, size_t size, int value)
{
	size_t i, mid;
	int result;

	/* check if array is NULL or size is 0 */
	if (!array || size == 0)
		return (-1);

	/* print array */
	printf("Searching in array: ");
	for (i = 0; i < size - 1; i++)
		printf("%d, ", array[i]);
	printf("%d\n", array[i]);

	/* if there is only one element in array and does not match value */
	if (size == 1 && array[0] != value)
		return (-1);

	/* calculate mid and consider duplicates in left half */
	mid = (size - 1) / 2;
	if (array[mid] == value)
	{
		if (array[mid - 1] == value)
			return (advanced_binary(array, mid + 1, value));
		return (mid);
	}
	/* do also for right half */
	if (array[mid] < value)
	{
		result = advanced_binary(array + mid + 1, size - mid - 1, value);
		if (result != -1)
			result += mid + 1;
	}
	else
	{
		/* otherwise, search in left half */
		result = advanced_binary(array, mid + 1, value);
	}
	/* return result */
	return (result);
}
