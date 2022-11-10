#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array, using malloc.
 * @nmemb: The number of elements.
 * @size: The of size of each array element.
 * Return: Pointer to memory allocated if successful.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int index;
	void *array;

	if (nmemb == 0 || size == 0)
		return (NULL);

	array = malloc((nmemb * size));

	if (array == NULL)
		return (NULL);

	for (index = 0; index < (nmemb * size); index++)
		*((char *)(array) + index) = 0;

	return (array);
}
