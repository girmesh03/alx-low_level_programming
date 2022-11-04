#include "main.h"

/**
 * _isalpha - Checks if c is a letter, lowercase or uppercase
 * @c: character to be checked
 * Return: (lower or uppercase)-> 1, else 0
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		{
		return (1);
		}
	else
		{
		return (0);
		}
	_putchar('\n');
}
