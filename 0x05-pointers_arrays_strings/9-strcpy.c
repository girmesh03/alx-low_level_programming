#include "main.h"

/**
 * _strcpy - Copies the string pointed to by src.
 * @src: Source.
 * @dest: Destination.
 * Return: The pointer to destination.
 */

char *_strcpy(char *dest, char *src)
{
	int index = 0;

	while (src[index] != '\0')
	{
		dest[index] = src[index];
		index++;
	}

	return (dest);
}

