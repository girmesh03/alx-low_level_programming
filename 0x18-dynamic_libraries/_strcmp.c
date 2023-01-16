#include "main.h"

/**
 * _strcmp - compare two strings
 * @s1: string 1
 * @s2: string 2
 * Return: 0 if equal, negative if s1 < s2, positive if s1 > s2
 */

int _strcmp(char *s1, char *s2)
{
	/* declare a variable to hold the length of the string */
	int index = 0;

	/* loop through the string until the null byte is reached */
	while (s1[index] != '\0' && s2[index] != '\0')
	{
		/* if the current character of s1 is less than s2 */
		if (s1[index] < s2[index])
		{
			/* return a negative number */
			return (-1);
		}
		/* if the current character of s1 is greater than s2 */
		else if (s1[index] > s2[index])
		{
			/* return a positive number */
			return (1);
		}
		/* increment the index variable */
		index++;
	}
	/* return 0 if equal */
	return (0);
}
