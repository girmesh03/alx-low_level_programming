#include "main.h"

/**
 * rev_string - Reverses a string.
 * @s: String pointer.
 * Return: void.
 */

void rev_string(char *s)
{
	int index = 0;
	char temp;
	int i;

	while (*(s + index) != '\0')
	{
		index++;
	}

	for (i = 0; i < (index / 2); i++)
	{
		temp = s[i];
		s[i] = s[index - i - 1];
		s[index - i - 1] = temp;
	}

}
