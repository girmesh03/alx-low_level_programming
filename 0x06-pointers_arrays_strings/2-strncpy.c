#include "main.h"

/**
 * _strncpy - Copies a strings Source to Destination up to n.
 * @dest: Destination.
 * @src: Source.
 * @n: number of char.
 * Return: char
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
