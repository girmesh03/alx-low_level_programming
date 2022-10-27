#include "main.h"
#include <stdio.h>

/**
 * cap_string - Capitalizes all words of a string.
 * @ch: Destination.
 * Return: char
 */

char *cap_string(char *ch)
{

	int i;
	int j;

	int execlude[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};
	int n = sizeof(execlude) / sizeof(execlude[0]);

	if (*ch >= 'a' && *ch <= 'z')
		{
		*ch = *ch - 32;
		}

	for (i = 1; ch[i] != '\0'; i++)
		{
		for (j = 0; j < n; j++)
			{
			if (ch[i] == execlude[j])
				{
				if ((ch[i + 1] >= 'a') && (ch[i + 1]) <= 'z')
					{
					ch[i + 1] = ch[i + 1] - 32;
					break;
					}
				}
			}
		}
	return (ch);
}
