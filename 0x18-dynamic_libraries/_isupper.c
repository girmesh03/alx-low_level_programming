#include "main.h"

/**
 * _isupper - checks for uppercase character
 * @c: character to check
 * Return: 1 if c is uppercase, 0 otherwise
 */

int _isupper(int c)
{
	/* if ascii value of c is between 65 and 90, return 1 */
	/* otherwise, return 0 */
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
