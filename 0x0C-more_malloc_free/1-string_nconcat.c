#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings.
 * @s1: Destination string.
 * @s2: Source string.
 * @n: Number of char (byte) to concatenate
 * Return: Returns a pointer to concatenated string.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len = 0, index;
	char *new_string;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (index = 0; s1[index] != '\0'; index++)
		len++;

	new_string = malloc(((len + n) + 1) * sizeof(char));

	if (new_string == NULL)
		return (NULL);

	for (index = 0; s1[index]; index++)
		new_string[index] = s1[index];

	for (index = 0; s2[index] && index < n; index++)
		new_string[len + index] = s2[index];


	new_string[len + index] = '\0';

	return (new_string);
}
