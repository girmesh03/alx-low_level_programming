#include "main.h"
#include <stdlib.h>

/**
 * _realloc - Reallocates a memory block using malloc and free.
 * @ptr: Memory previously allocated.
 * @old_size: Old size in byte.
 * @new_size: New size in byte.
 * Return: ptr - If new_size == old_size.
 * NULL - If new_size == 0 and ptr is not NULL.
 * else A pointer to the reallocated memory block.
 *
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int index;
	char *new_block;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
	{
		new_block = malloc(new_size);

		if (new_block == NULL)
		{
			return (NULL);
		}

		return (new_block);
	}

	if (new_size > old_size && (ptr != NULL))
	{
		new_block = malloc(new_size);

		if (new_block == NULL)
			return (new_block);

		for (index = 0; index < old_size; index++)
			new_block[index] = *((char *)ptr + 1);

		free(ptr);
	}

	return (new_block);
}
