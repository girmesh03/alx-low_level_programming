#include "main.h"

/**
 * print_alphabet - Prints lower case alphabets
 * Description: Letters represented in hex value
 * Return: 0
 */

void  print_alphabet(void)
{
	int smallLetter = 0x61;

	while (smallLetter <= 0x7A)
	{
		_putchar(smallLetter);
		smallLetter++;
	}
	_putchar('\n');
}
