#include "main.h"

/**
 * _isupper - Checks upper and lower case letters
 * @c: value to be checked
 * Return: 1-> uppercase and 0-> lowercase
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		{
		return (1);
		}
	else
		{
		return (0);
		}
}
