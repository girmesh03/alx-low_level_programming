#include "main.h"
#include <stdio.h>

/**
 * string_toupper - Lowercase letters of a string to uppercase.
 * @ch: A string pointer.
 * Return: char
 */

char *string_toupper(char *ch)
{
	while (*ch != '\0')
		{
		if ((*ch >= 'a') && (*ch <= 'z'))
			{
			*ch = *ch - 32;
			}
		ch++;
		}

	return (ch);
}

