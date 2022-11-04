#include <stdio.h>

/**
 * main - Print all the letters except q and e
 *
 * Return: 0
 */

int main(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		if ((alphabet != 'q') && (alphabet != 'e'))
		{
			putchar(alphabet);
		}
		alphabet++;
	}
	putchar('\n');

	return (0);
}
