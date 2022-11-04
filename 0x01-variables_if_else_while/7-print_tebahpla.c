#include <stdio.h>

/**
 * main - Print digit asciiCode[0-10)
 *
 * Return: 0
 */

int main(void)
{
	char asciiCode = 'z';

	for (asciiCode = 'z'; asciiCode >= 'a'; asciiCode--)
	{
		putchar(asciiCode);
	}
	putchar('\n');

	return (0);
}

