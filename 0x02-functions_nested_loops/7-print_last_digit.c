#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number.
 * @n: A number.
 * Return: The n of the last digit
 */

int print_last_digit(int n)
{
	int lastDigit = n % 10;

	if (lastDigit < 0)
		{
		lastDigit = ((-1) * (lastDigit));
		_putchar(lastDigit + 48);
		return (lastDigit);
		}
	else
		{
		_putchar(lastDigit + 48);
		return (lastDigit);
		}
	return (0);
}
