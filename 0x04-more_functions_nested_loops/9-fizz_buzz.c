#include <stdio.h>

/**
 * main - prints the numbers from 1 to 100, followed by a new line.
 *	But for multiples of three print Fizz instead of the number
 *	and for the multiples of five print Buzz.
 *	For numbers which are multiples of both three and five print FizzBuzz
 *
 * Return: Always 0.
 */

int main(void)
{
	int loop;

	for (loop = 1; loop <= 100; loop++)
	{
		if (loop % 3 == 0 && loop % 5 == 0)
		{
			printf("%s", "FizzBuzz");
		}
		else if (loop % 5 == 0)
		{
			printf("%s", "Buzz");
		}
		else if (loop % 3 == 0)
		{
			printf("%s", "Fizz");
		}
		else
		{
			printf("%d", loop);
		}

		if (loop < 100)
		{
			printf(" ");
		}

	}
	printf("\n");
	return (0);
}
