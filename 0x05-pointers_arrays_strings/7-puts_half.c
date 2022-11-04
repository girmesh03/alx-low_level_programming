#include "main.h"
#include <stdio.h>

/**
 * puts_half - Prints half of a string.
 * @str: Pointer.
 * Return: void.
 */

void puts_half(char *str)
{
	int index = 0;

	while (str[index] != '\0')
	{
		index++;
	}

	index += 1;

	for (index /= 2; str[index] != '\0'; index++)
	{
		_putchar(str[index]);
	}

	_putchar('\n');
}

