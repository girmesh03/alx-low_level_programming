#include "main.h"
#include <stdio.h>

/**
 * _strncpy - Copies a strings Source to Destination up to n.
 * @dest: Destination.
 * @src: Source.
 * @n: number of char.
 * Return: char
 */

char *_strncpy(char *dest, char *src, int n)
{
	char *r = dest;

	for (; ((n >= 0) && ((*dest++ = *src++) != '\0')); n--);

	return (r);
}
