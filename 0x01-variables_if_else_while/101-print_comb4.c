#include <stdio.h>

/**
 * main - Print 3 digit combination
 * Return: 0.
 */

int main(void)
{
	int digit_1;
	int digit_2;
	int digit_3;

	for (digit_3 = '0'; digit_3 <= '9'; digit_3++)
	{
		for (digit_2 = '0'; digit_2 <= '9'; digit_2++)
		{
			for (digit_1 = '0'; digit_1 <= '9'; digit_1++)
			{
				if (!((digit_1 == digit_2) || (digit_3 == digit_2) ||
				      (digit_2 > digit_1) || (digit_3 > digit_2)))
				{
					putchar(digit_3);
					putchar(digit_2);
					putchar(digit_1);
					if (!(digit_1 == '9' && digit_3 == '7' &&
					      digit_2 == '8'))
					{
						putchar(44);
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
