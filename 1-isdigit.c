#include "main.h"

/**
 * _isdigit - Checks digit
 * @c: value to be checked
 * Return: 1-> digit and 0-> otherwise
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		{
		return (1);
		}
	else
		{
		return (0);
		}
}
