#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: destination
 * @src: source
 * @n: number of bytes
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	/* declare a variable to hold the index */
	unsigned int index = 0;

	/* loop through the string until the null byte is reached */
	while (index < n)
	{
		/* assign the value of the current character to the next character */
		dest[index] = src[index];
		/* increment the index variable */
		index++;
	}
	/* return the pointer to the resulting string dest */
	return (dest);
}
