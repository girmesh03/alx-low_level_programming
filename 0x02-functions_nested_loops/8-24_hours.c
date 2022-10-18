#include "main.h"

/**
 * jack_bauer - prints every minute of the day, starting from 00:00 to 23:59.
 * @void.
 * Return: Always 0.
 */

void jack_bauer(void)
{

	int hour = 0;
	int min = 0;

	while (hour <= 23)
		{
		while (min <= 59)
			{
			_putchar (hour / 10 + 48);
			_putchar (hour % 10 + 48);
			_putchar (58);
			_putchar (min / 10 + 48);
			_putchar (min % 10 + 48);
			_putchar ('\n');

			min++;
			if (min > 59)
				{
				min = 0;
				hour++;
				}

			if (hour > 23)
				{
				break;
				}

			}


		}
}
