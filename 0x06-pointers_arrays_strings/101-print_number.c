#include "main.h"
#include <stdio.h>

/**
 * print_number - Prints an integer.
 * @n: Integer.
 * Return: void.
 */

void print_number(int n)
{
	unsigned int value = n;

	if (n < 0)
		{
		_putchar(45);
		value *= -1;
		}

	if ((value / 10))
		{
		print_number(value / 10);
		}
	_putchar(48 + (value % 10));
}
