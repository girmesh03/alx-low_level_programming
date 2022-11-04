#include "main.h"

/**
 * string_toupper - Lowercase letters of a string to uppercase.
 * @ch: A string pointer.
 * Return: char
 */

char *string_toupper(char *ch)
{
	int i;

	for (i = 0; ch[i] != '\0'; i++)
	{
		if ((ch[i] >= 'a') && (ch[i] <= 'z'))
		{
			ch[i] = ch[i] - 32;
		}
	}

	return (ch);
}

