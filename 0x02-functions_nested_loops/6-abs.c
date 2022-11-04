#include "main.h"

/**
 * _abs - Computes the absolute value of an integer.
 * @n: Value of an integer
 * Return: absolute of n.
 */

int _abs(int n)
{
	if (n < 0)
	{
		return ((-1) * (n));
	}
	else
	{
		return  (n);
	}
}
