#include <stdio.h>

/**
 * main - Print digit using putchar[0-10]
 *
 * Return: 0
 */

int main(void)
{
	int ascii = '0';

	while (ascii <= '9')
	{
		putchar(ascii);
		ascii++;
	}
	putchar('\n');

	return (0);
}
