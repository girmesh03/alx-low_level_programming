#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - get random number and check
 * Return: 0
 */

int main(void)
{
	int n;
	int digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Last digit of %d is ", n);
	digit = n % 10;
	if (digit > 5)
	{
		printf("%d and is greater than 5\n", digit);
	}
	else if ((digit < 6) && (digit < 0))
	{
		printf("%d and is less than 6 and not 0\n", digit);
	}
	else
	{
		printf("%d and is 0\n", digit);
	}
	return (0);
}
