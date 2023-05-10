#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of integers using the
 * Binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: first index where value is located, or -1 if value is not present
 * in array or if array is NULL
 */
int binary_search(int *array, size_t size, int value)
{
	/* declare variables */
	size_t left, right, mid, index;

	/* check if array is NULL */
	if (array == NULL)
		return (-1);

	/* initialize left and right */
	left = 0;
	right = size - 1;

	/* loop through array */
	while (left <= right)
	{
		/* print array */
		printf("Searching in array: ");
		for (index = left; index <= right; index++)
		{
			printf("%d", array[index]);
			if (index != right)
				printf(", ");
		}
		printf("\n");

		/* calculate mid */
		mid = (left + right) / 2;
		/* check if value is found, return index */
		if (array[mid] == value)
			return (mid);
		/* check if value is in left half */
		else if (array[mid] > value)
			right = mid - 1;
		/* check if value is in right half */
		else
			left = mid + 1;
	}

	/* if value not found, return -1 */
	return (-1);
}

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
	/* declare variables */
	size_t bound, index = 0;

	/* check if array is NULL */
	if (array == NULL || size == 0)
		return (-1);

	/* initialize bound */
	bound = 1;

	/* loop through array */
	while (bound < size && array[bound] < value)
	{
		/* print array */
		printf("Value checked array[%lu] = [%d]\n", bound, array[bound]);
		bound *= 2;
	}

	/* print the boundaries of the subarray and call binary search */
	if (bound < size)
	{
		printf("Value found between indexes [%lu] and [%lu]\n",
			   bound / 2, bound);
		index = binary_search(array + (bound / 2), (bound / 2) + 1, value);
	}
	else
	{
		printf("Value found between indexes [%lu] and [%lu]\n",
			   bound / 2, bound - 1);
		index = binary_search(array + (bound / 2), size - (bound / 2), value);
	}

	/* return index */
	if ((int)index != -1)
		return (index + (bound / 2));
	else
		return (-1);
}
