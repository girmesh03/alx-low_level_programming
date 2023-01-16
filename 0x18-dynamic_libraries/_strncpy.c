#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: destination string
 * @src: source string
 * @n: number of bytes to be used from src
 * Return: pointer to the resulting string dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	/* declare a variable to hold the length of the string */
	int index = 0;

	/* loop through the string until the null byte is reached */
	while (src[index] != '\0' && index < n)
	{
		/* assign the value of the current character to the next character */
		dest[index] = src[index];
		/* increment the index variable */
		index++;
	}
	/* assign the null byte to the next character */
	dest[index] = '\0';
	/* return the pointer to the resulting string dest */
	return (dest);
}
