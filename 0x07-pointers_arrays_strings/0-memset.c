#include "main.h"

/**
 * _memset - Fills memory with a constant byte.
 * @s: memory area
 * @n: first n bytes
 * @b: constant byte
 * Return: char
 */

char *_memset(char *s, char b, unsigned int n)
{
	while (n--)
	{
		*(s + n) = b;
	}

	return (s);
}
