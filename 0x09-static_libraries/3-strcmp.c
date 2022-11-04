#include "main.h"
#include <stdio.h>

/**
 * _strcmp - Compares two strings.
 * @s1: Destination.
 * @s2: Source.
 * Return: int
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while ((s1[i] || s2[i]) != '\0')
		{
		if (s1[i] == s2[i])
			{
			i++;
			continue;
			}
		else if (s1[i] > s2[i])
			{
			return (s1[i] - s2[i]);
			}
		else if (s1[i] < s2[i])
			{
			return (s1[i] - s2[i]);
			}
		i++;
		}

	return (0);
}
