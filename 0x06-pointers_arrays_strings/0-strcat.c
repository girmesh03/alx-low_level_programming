#include "main.h"

/**
 * _strcat - Concatenates two strings
 * @dest: Destination.
 * @src: Source.
 * Return: char
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j;

	while (dest[i] != '\0')
		i++;

	for (j = 0; src[j] != '\0'; j++)
		{
		dest[i + j] = src[j];
		}

	return (dest);

}
