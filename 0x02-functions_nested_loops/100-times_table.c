#include "main.h"
/**
 * print_times_table - print time table
 * @n: n's table n < 15 and n > 0
 * Returns: void
 */

void print_times_table(int n)
{
	int number;
	int multiplier;
	int result;

	if ((n > 0) && (n < 15))
	{
		for (multiplier = 0; multiplier <= n; multiplier++)
		{
			for (number = 0; number <= n; number++)
			{
				result = number * multiplier;
				if (number == 0)
				{
					_putchar(result + 48);
				}
				else
				{
					_putchar(',');
					_putchar(' ');
					if (result <= 9)
					{
						_putchar(' ');
						_putchar(' ');
						_putchar(result + 48);
					}
					else if ((result > 9) && (result < 100))
					{
						_putchar(' ');
						_putchar((result / 10) + 48);
						_putchar((result % 10) + 48);
					}
					else if (result >= 100)
					{
						_putchar((result / 100) + 48);
						_putchar(((result / 10) % 10) + 48);
						_putchar((result % 10) + 48);
					}
				}
			}
		_putchar('\n');
		}
	}
}
