#include "main.h"
#include <stdio.h>

/**
 * leet - Encodes a string into 1337.
 * @ch: A string pointer.
 * Return: char
 */

char *leet(char *ch)
{
	int j;
	int i;

	int encode_lower[] = {97, 101, 111, 116, 108};
	int encode_upper[] = {65, 69, 79, 84, 76};
	int encode_digit[] = {52, 51, 48, 55, 49};
	int n = sizeof(encode_digit) / sizeof(encode_digit[0]);

	for (j = 0; ch[j] != '\0'; j++)
		{
		for (i = 0; i < n; i++)
			{
			if (ch[j] == encode_lower[i] || ch[j] == encode_upper[i])
				{
				ch[j] = encode_digit[i];
				break;
				}
			}

		}

	return (ch);
}
