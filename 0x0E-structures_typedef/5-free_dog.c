#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - Frees the allocated memory.
 * @d: A pointer to user defined data type.
 * Return: NULL if fails or frees memory.
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
