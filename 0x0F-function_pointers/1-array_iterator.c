#include "function_pointers.h"
#include <stdlib.h>

/**
* array_iterator - Executes a function given as a parameter.
* @array: Array.
* @size: Number of elements of the array.
* @action: A pointer passed to array iterator.
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t index;

	if (array == NULL || action == NULL)
	{
		return;
	}
	else
	{
		for (index = 0; index < size; index++)
		{
			action(*(array + index));
		}
	}
}
