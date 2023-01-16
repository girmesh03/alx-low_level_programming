#include "main.h"

/**
 * _atoi - convert a string to an integer
 * @s: string to convert
 * Return: integer value of string
 */

int _atoi(char *s)
{
	/* declare a variable to hold the length of the string */
	int index = 0;
	/* declare a variable to hold the sign of the number */
	int sign = 1;
	/* declare a variable to hold the number */
	int num = 0;

	/* loop through the string until the null byte is reached */
	while (s[index] != '\0')
	{
		/* check if the current character is a digit */
		if (s[index] >= '0' && s[index] <= '9')
		{
			/* convert the character to an integer */
			num = num * 10 + (s[index] - '0');
			/* check if the next character is a digit */
			if (s[index + 1] < '0' || s[index + 1] > '9')
			{
				/* return the number */
				return (num * sign);
			}
		}
		/* check if the current character is a minus sign */
		else if (s[index] == '-')
		{
			/* change the sign of the number */
			sign *= -1;
		}
		/* increment the index variable */
		index++;
	}
	/* return the number */
	return (num * sign);
}
