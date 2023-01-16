#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: string
 * @accept: substring
 * Return: pointer to the byte in s that matches one of the bytes in accept,
 * or NULL if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	/* declare a variable to hold the index */
	unsigned int index = 0;
	/* declare a variable to hold the index of the substring */
	unsigned int index2 = 0;
	/* declare a variable to hold the pointer to the byte */
	char *byte = NULL;

	/* loop through the string until the null byte is reached */
	while (s[index] != '\0')
	{
		/* loop through the substring until the null byte is reached */
		while (accept[index2] != '\0')
		{
			/* if the current character matches */
			/* the current character of the substring */
			if (s[index] == accept[index2])
			{
				/* assign the pointer to the current character */
				byte = s + index;
				/* break out of the loop */
				break;
			}
			/* increment the index of the substring */
			index2++;
		}
		/* if the current character matches */
		/* the current character of the substring */
		if (s[index] == accept[index2])
		{
			/* break out of the loop */
			break;
		}
		/* reset the index of the substring */
		index2 = 0;
		/* increment the index variable */
		index++;
	}
	/* return the pointer to the byte */
	return (byte);
}
