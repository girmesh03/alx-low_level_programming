#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings.
 * @s1: destination
 * @s2: source
 * Return: char
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int s1_len = 0, s2_len = 0, index, counter = 0;
	char *new_strcat;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (index = 0; s1[index]; index++)
		s1_len++;

	for (index = 0; s2[index]; index++)
		s2_len++;

	counter = s1_len + s2_len;

	new_strcat = malloc(counter * sizeof(char));

	if (new_strcat == NULL)
		return (NULL);

	counter = 0;

	for (index = 0; s1[index]; index++)
		new_strcat[counter++] = s1[index];

	for (index = 0; s2[index]; index++)
		new_strcat[counter++] = s2[index];

	return (new_strcat);
}
