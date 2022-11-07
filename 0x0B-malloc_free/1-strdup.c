#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * @str: the string given as a parameter.
 * Return: char
 */

char *_strdup(char *str)
{
	unsigned int index = 0;
	char *new_str;

	if (str == NULL)
		return (NULL);

	while (str[index] != '\0')
		index++;

	new_str = malloc((index + 1) * sizeof(char));

	if (new_str == NULL)
		return (NULL);

	index = 0;

	for (index = 0; str[index] != '\0'; index++)
		new_str[index] = str[index];

	new_str[index] = '\0';

	return (new_str);
}
