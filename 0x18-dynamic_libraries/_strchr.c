#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: string
 * @c: character
 * Return: pointer to the first occurrence of the character c in the string s,
 * or NULL if the character is not found
 */

char *_strchr(char *s, char c)
{
	/* declare a variable to hold the index */
	unsigned int index = 0;

	/* loop through the string until the null byte is reached */
	while (s[index] != '\0')
	{
		/* if the current character matches the character c */
		if (s[index] == c)
		{
			/* return a pointer to the current character */
			return (s + index);
		}
		/* increment the index variable */
		index++;
	}
	/* if the character c is not found, return NULL */
	return (NULL);
}
