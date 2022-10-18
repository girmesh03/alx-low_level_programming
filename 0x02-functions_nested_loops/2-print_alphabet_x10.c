#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet 10 times
 * Return: returns 0 if successful
 */

void print_alphabet_x10(void)
{
	int counter = 0;

	while (counter <= 10)
	{
		int smallLetter = 0x61;

		while (smallLetter < 0x7A)
		{
			_putchar(smallLetter);
			smallLetter++;
		}
		counter++;
		_putchar('\n');
	}
}
