#include "main.h"

int _sqrt_recursion(int n);
int get_sqrt(int r, int number);


/**
 * get_sqrt - Finds the natural square root.
 * @r: The square root of number.
 * @number: The number to be tested.
 * Return: The square root or -1
 */

int get_sqrt(int r, int number)
{
	if ((r * r) == number)
	{
		return (r);
	}

	if (r == number / 2)
	{
		return (-1);
	}

	return (get_sqrt(r + 1, number));
}

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n:number
 * Return: the natural square root of n or -1
 */

int _sqrt_recursion(int n)
{
	int r = 0;

	if (n < 0)
	{
		return (-1);
	}
	if (n == 1)
	{
		return (1);
	}

	return (get_sqrt(r, n));
}
