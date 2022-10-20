#include "main.h"

/**
 * more_numbers - Prints digit [0 - 14], ten times.
 * Returns: void
 */

void more_numbers(void)
{
	int loop;
	int digit;

	for (loop = 0; loop < 10; loop++)
	{
		for (digit = 0; digit <= 14; digit++)
		{
			if (digit >= 10)
				_putchar('0' + (digit / 10));
			_putchar('0' + (digit % 10));
		}
		_putchar('\n');
	}
}
