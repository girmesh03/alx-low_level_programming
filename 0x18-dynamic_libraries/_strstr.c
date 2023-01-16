#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: string
 * @needle: substring
 * Return: pointer to the beginning of the located substring,
 * or NULL if the substring is not found
 */

char *_strstr(char *haystack, char *needle)
{
	/* declare a variable to hold the index */
	unsigned int index = 0;
	/* declare a variable to hold the index of the substring */
	unsigned int index2 = 0;
	/* declare a variable to hold the pointer to the substring */
	char *substring = NULL;

	/* loop through the string until the null byte is reached */
	while (haystack[index] != '\0')
	{
		/* loop through the substring until the null byte is reached */
		while (needle[index2] != '\0')
		{
			/* if the current character matches */
			/* the current character of the substring */
			if (haystack[index] == needle[index2])
			{
				/* assign the pointer to the current character */
				substring = haystack + index;
				/* break out of the loop */
				break;
			}
			/* increment the index of the substring */
			index2++;
		}
		/* if the current character matches */
		/* the current character of the substring */
		if (haystack[index] == needle[index2])
		{
			/* break out of the loop */
			break;
		}
		/* reset the index of the substring */
		index2 = 0;
		/* increment the index variable */
		index++;
	}
	/* return the pointer to the substring */
	return (substring);
}
