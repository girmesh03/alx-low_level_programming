#include "main.h"

/**
 * _isdigit - checks for a digit (0 through 9)
 * @c: character to check
 * Return: 1 if c is a digit, 0 otherwise
 */

int _isdigit(int c)
{
	/* if ascii value of c is between 48 and 57, return 1 */
	/* otherwise, return 0 */
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
