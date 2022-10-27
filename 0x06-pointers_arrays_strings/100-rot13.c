#include "main.h"
#include <stdio.h>

/**
 * rot13 - Encodes a string using rot13.
 * @ch: A string pointer.
 * Return: char
 */

char *rot13(char *ch)
{
	int j;
	int i;

	char letters[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char encoder[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	const int characters = 52;

	for (j = 0; ch[j] != '\0'; j++)
		{
		for (i = 0; i < characters; i++)
			{
			if (ch[j] == letters[i])
				{
				ch[j] = encoder[i];
				break;
				}
			}
		}

	return (ch);
}
