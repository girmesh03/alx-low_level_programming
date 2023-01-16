#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: string
 * @accept: substring
 * Return: number of bytes in the initial segment of s which consist only of
 * bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	/* declare a variable to hold the index */
	unsigned int index = 0;
	/* declare a variable to hold the index of the substring */
	unsigned int index2 = 0;
	/* declare a variable to hold the number of bytes */
	unsigned int bytes = 0;

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
				/* increment the number of bytes */
				bytes++;
				/* break out of the loop */
				break;
			}
			/* increment the index of the substring */
			index2++;
		}
		/* if the current character does not */
		/* match the current character of the substring */
		if (s[index] != accept[index2])
		{
			/* break out of the loop */
			break;
		}
		/* reset the index of the substring */
		index2 = 0;
		/* increment the index variable */
		index++;
	}
	/* return the number of bytes */
	return (bytes);
}
