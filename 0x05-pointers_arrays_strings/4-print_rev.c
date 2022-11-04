#include "main.h"

/**
 * print_rev - Prints a string, in reverse
 * @s: String pointer.
 * Return: Always 0.
 */

void print_rev(char *s)
{
	int index = 0;

	while (*(s + index) != '\0')
	{
		index++;
	}

	index -= 1;

	while (index >= 0)
	{
		_putchar(*(s + index));
		index--;
	}

	_putchar('\n');
}
