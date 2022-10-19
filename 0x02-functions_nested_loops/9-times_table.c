#include "main.h"

/**
 * times_table - prints the nine times table
 * Return: void
 */

void times_table(void)
{
	int number;
	int multiplier;
	int result;

	for (number = 0; number <= 9; ++number)
	{
		_putchar(48);
		for (multiplier = 1; multiplier <= 9; ++multiplier)
		{
			_putchar(',');
			_putchar(' ');

			result = number * multiplier;

			if (result <= 9)
			{
				_putchar(' ');
			}
			else
			{
				_putchar((result / 10) + 48);
			}

			_putchar((result % 10) + 48);
		}

		_putchar('\n');

	}

}
