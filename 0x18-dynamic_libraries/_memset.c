#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: pointer to the memory area
 * @b: constant byte
 * @n: number of bytes to fill
 * Return: pointer to the memory area
 */

char *_memset(char *s, char b, unsigned int n)
{
	/* declare a variable to hold the length of the string */
	unsigned int index = 0;

	/* loop through the string until the null byte is reached */
	while (index < n)
	{
		/* set the current character to b */
		s[index] = b;
		/* increment the index variable */
		index++;
	}
	/* return the pointer to the memory area */
	return (s);
}
