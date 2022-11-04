#include <time.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Generates random passwords for 101-crackme
 *
 * Return: 0
 */

int main(void)
{
	int total;
	char character;

	srand(time(NULL));

	while (total <= 2645)
	{
		character = rand() % 128;
		total += character;
		putchar(character);
	}

	putchar(2772 - total);
	return (0);
}
