#include <stdlib.h>
#include <stdio.h>

/**
 * main - Print combinations of two two-digit numbers
 * Return: 0
 */

int main(void)
{
	int firstNumber;
	int secondNumber;

	for (firstNumber = 0; firstNumber < 100; firstNumber++)
	{
		for (secondNumber = 0; secondNumber < 100; secondNumber++)
		{
			if (firstNumber < secondNumber)
			{
				putchar((firstNumber / 10) + 48);
				putchar((firstNumber % 10) + 48);
				putchar(' ');
				putchar((secondNumber / 10) + 48);
				putchar((secondNumber % 10) + 48);
					if (firstNumber != 98 || secondNumber != 99)
					{
						putchar(44);
						putchar(' ');
					}
			}
		}
	}
	putchar('\n');
	return (0);
}
