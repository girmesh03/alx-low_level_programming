#include "main.h"

/**
 * _strcpy - copies the string pointed to by src, including the terminating
 * null byte (\0), to the buffer pointed to by dest
 * @dest: destination buffer
 * @src: source string
 * Return: pointer to the destination string dest
 */

char *_strcpy(char *dest, char *src)
{
	/* declare a variable to hold the length of the string */
	int index = 0;

	/* loop through the string until the null byte is reached */
	while (src[index] != '\0')
	{
		/* copy the character at the current index */
		dest[index] = src[index];
		/* increment the index variable */
		index++;
	}
	/* copy the null byte */
	dest[index] = src[index];

	/* return the pointer to the destination string */
	return (dest);
}
