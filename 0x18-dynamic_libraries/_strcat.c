#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: destination string
 * @src: source string
 * Return: pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	/* declare a variable to hold the length of the string */
	int index = 0;
	/* get the length of destination string */
	int length = 0;

	/* loop through the string until the null byte is reached */
	while (dest[index] != '\0')
	{
		/* increment the index variable */
		index++;
	}
	/* assign the value of the index variable to the length variable */
	length = index;
	/* reset the index variable */
	index = 0;
	/* loop through the string until the null byte is reached */
	while (src[index] != '\0')
	{
		/* assign the value of the current character to the next character */
		dest[length + index] = src[index];
		/* increment the index variable */
		index++;
	}
	/* assign the null byte to the next character */
	dest[length + index] = '\0';
	/* return the pointer to the resulting string dest */
	return (dest);
}
