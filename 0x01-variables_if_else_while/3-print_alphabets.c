#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Print in Lower and Upper case.
 *
 * Return: 0.
 */

int main(void)
{
	char lowerCase = 'a';
	char upperCase = 'A';

	while (lowerCase <= 'z')
	{
		putchar(lowerCase);
		lowerCase++;
	}
	while (upperCase <= 'Z')
	{
		putchar(upperCase);
		upperCase++;
	}
	putchar('\n');
	return (0);
}
