#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: string
 * @needle: substring
 * Return: char or NULL
 */

char *_strstr(char *haystack, char *needle)
{
	int ch = 0;
	int index = 0;

	for (ch = 0; needle[ch] != '\0'; ch++)
	{
		for (index = 0; haystack[index] != '\0'; index++)
		{
			if (needle[ch] == haystack[index])
			{
				return (&haystack[index]);
			}
		}
	}

	return ('\0');
}
