#include "main.h"
/**
 * print_times_table - prints n times table
 * @n: n's table b/n n > 0 annd n <= 15
 * Returns: void
 */
void print_times_table(int n)
{
	int number;
	int multiplier;
	int result;

	if (n < 0 || n >= 15)
		return;
	for (number = 0; number <= n; number++)
		{
		for (multiplier = 0; multiplier <= n; multiplier++)
			{
			result = (number * multiplier);
			if (multiplier == 0)
				_putchar(48 + result);
			else
				{
				_putchar(',');
				_putchar(' ');
				if (result <= 9)
					{
					_putchar(' ');
					_putchar(' ');
					_putchar(48 + result);
					}
				else if (result > 9 && result < 100)
					{
					_putchar(' ');
					_putchar(48 + (result / 10));
					_putchar(48 + (result % 10));
					}
				else if (result >= 100)
					{
					_putchar(48 + (result / 100));
					_putchar(48 + ((result / 10) % 10));
					_putchar(48 + (result % 10));
					}
				}
			}
		_putchar('\n');
		}
}
