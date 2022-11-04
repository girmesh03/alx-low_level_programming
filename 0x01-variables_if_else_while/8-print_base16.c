#include <stdio.h>

/**
 * main - Print numbers of base 16.
 *
 * Return: 0
 */

int main(void)
{
	int i = '0';
	int j = 'a';

	for (i = '0'; i <= '9'; i++)
	{

		putchar(i);

	}

	for (j = 'a'; j <= 'f'; j++)
	{

		putchar(j);

	}
	putchar('\n');
	return (0);

}
