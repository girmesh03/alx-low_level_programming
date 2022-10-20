#include "main.h"

/**
 * print_most_numbers - Prints digit 0 to 9 except 2 and 4.
 * Return: void.
 */

void print_most_numbers(void)
{
	int digit;

	for (digit = 48; digit <= 57; digit++)
	{
		if (digit == 2 + '0' || digit == 4 + '0')
		{
			continue;
		}
		_putchar(digit);
	}
	_putchar('\n');
}
