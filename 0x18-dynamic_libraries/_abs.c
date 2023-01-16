#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @n: integer to compute
 * Return: absolute value of n
 */

int _abs(int n)
{
	/* if n is negative, multiply by -1 */
	if (n < 0)
		n = n * -1;
	/* return absolute value of n */
	return (n);
}
