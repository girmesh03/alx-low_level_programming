#include <stdio.h>

/**
 * main - Print numbers with comma.
 *
 * Return: 0
 */

int main(void)
{
	int i = '0';

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);

		if (i != '9')
		{
			putchar(44);
			putchar(' ');
		}

	}
	putchar('\n');
	return (0);
}
