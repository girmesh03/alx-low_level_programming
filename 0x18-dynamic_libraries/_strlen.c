#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string to check
 * Return: length of string
 */

int _strlen(char *s)
{
	/* declare a variable to hold the length of the string */
	int index = 0;

	/* loop through the string until the null byte is reached */
	while (s[index] != '\0')
	{
		/* increment the index variable */
		index++;
	}

	/* return the length of the string */
	return (index);
}
