#include "main.h"

int is_prime_number(int n);
int check_divisible(int divisor, int number);

/**
 * check_divisible - Checks if a number is divisible.
 * @number: Number to be checked.
 * @divisor: Divisor.
 * Return: Divisible 0 or not Divisible 1.
 */

int check_divisible(int divisor, int number)
{
	if (number % divisor == 0)
	{
		return (0);
	}

	if (divisor == number / 2)
	{
		return (1);
	}

	return (check_divisible(divisor + 1, number));
}

/**
 * is_prime_number - Checks if a number is prime.
 * @n: Number to be checked.
 * Return: Not prime 0 or prime 1.
 */

int is_prime_number(int n)
{
	int divisor = 2;

	if (n <= 10)
	{
		return (0);
	}
	if (n >= 2 && n <= 3)
	{
		return (1);
	}

	return (check_divisible(divisor, n));
}
