#include <stdio.h>

/**
 * main - Finds and prints the largest prime factor of the number 612852475143.
 * Return: 0
 */

int main(void)
{
	unsigned long number = 612852475143;
	unsigned long divisor = 2;
	unsigned long factor;

	while (number != 0)
	{
		if ((number % divisor) != 0)
		{
			divisor = divisor + 1;
		}
		else
		{
			factor = number;
			number = number / divisor;

			if (number == 1)
			{
				printf("%lu\n", factor);
				break;
			}
		}
	}

	return (0);
}
