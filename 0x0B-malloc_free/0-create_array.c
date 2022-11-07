#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 * @size: size of the array
 * @c: value
 * Return: char
 */

char *create_array(unsigned int size, char c)
{
	unsigned int index = 0;
	char *array;

	if (size == 0)
		return (NULL);


	array = malloc(size * sizeof(char));

	if (array == NULL)
		return (NULL);

	for (index = 0; index < size; index++)
		array[index] = c;

	return (array);
}
