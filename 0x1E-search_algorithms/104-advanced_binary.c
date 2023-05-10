#include "search_algos.h"

/**
 * binary_search_recursive - searches for a value in a sorted array of integers
 * using the Binary search algorithm with recursion
 * @array: pointer to the first element of the array to search in
 * @left: leftmost index
 * @right: rightmost index
 * @value: value to search for
 * Return: first index where value is located, or -1 if value is not present
 * in array or if array is NULL
 */

int binary_search_recursive(int *array, size_t left, size_t right, int value)
{
	size_t mid, index;

	/* check if array is NULL */
	if (array == NULL)
		return (-1);

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
			return (binary_search_recursive(array, left, mid - 1, value));
		/* check if value is in right half */
		else
			return (binary_search_recursive(array, mid + 1, right, value));
	}

	/* if value not found, return -1 */
	return (-1);
}

/**
 * advanced_binary - searches for a value in a sorted array of integers using
 * the Binary search algorithm with recursion
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: first index where value is located, or -1 if value is not present
 * in array or if array is NULL
 */

int advanced_binary(int *array, size_t size, int value)
{
	/* declare variables */
	size_t left, right;

	/* check if array is NULL */
	if (array == NULL)
		return (-1);

	/* initialize left and right */
	left = 0;
	right = size - 1;

	/* call recursive function */
	return (binary_search_recursive(array, left, right, value));
}
