#include "main.h"
#include <stddef.h>

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to a string of 0 and 1 chars
 * Return: the converted number, or 0 if
 * there is one or more chars in the string b that is not 0 or 1
 * or if b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	int index;
	unsigned int converted = 0;

	/* check if b is NULL */
	if (b == NULL)
		return (0);

	/*check if b contains char other than 0 or 1*/
	for (index = 0; b[index] != '\0'; index++)
	{
		if (b[index] != '0' && b[index] != '1')
			return (0);
	}

	/*convert binary to decimal*/
	for (index = 0; b[index] != '\0'; index++)
	{
		converted <<= 1;
		if (b[index] == '1')
			converted += 1;
	}

	return (converted);
}
