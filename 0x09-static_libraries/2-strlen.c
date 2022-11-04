#include "main.h"

/**
 * _strlen - Counts length of a string.
 * @s: Value to be update.
 * Return: The number of character in string.
 */

int _strlen(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		count++;
		s++;
	}

	return (count);
}
