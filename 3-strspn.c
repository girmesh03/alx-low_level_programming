#include "main.h"

/**
 * _strspn - gets the length of a prefix substring.
 * @s: string
 * @accept: substring
 * Return: int
 */

unsigned int _strspn(char *s, char *accept)
{
	int index = 0;
	unsigned int result = 0;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
			{
				result++;
				break;
			}
			else if (accept[index + 1] == '\0')
			{
				return (result);
			}
		}

		s++;
	}

	return (result);
}
