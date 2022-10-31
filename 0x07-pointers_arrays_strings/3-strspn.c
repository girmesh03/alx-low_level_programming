#include "main.h"

/**
 * _strspn - gets the length of a prefix substring.
 * @s: string
 * @accept: substring
 * Return: int
 */

unsigned int _strspn(char *s, char *accept)
{
	int len = 0, index = 0;
	char *p = s;

	while (*p++ != '\0')
		;

	len = p - s;

	if (*s == *accept)
	{
		return (index);
	}
	else
	{
		while (index < len)
		{
			if (s[index] == *accept)
			{
				break;
			}
			index++;
		}
	}

	return (++index);
}
