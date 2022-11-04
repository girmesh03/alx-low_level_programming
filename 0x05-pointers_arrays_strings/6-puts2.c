#include "main.h"

/**
 * puts2 - Prints every other character of a string, starting first character.
 * @str: String pointer.
 * Return: void.
 */

void puts2(char *str)
{
	int index = 0;
	int count;

	while (*(str + index) != '\0')
	{
		index++;
	}

	for (count = 0; count < index; count = count + 2)
	{
		_putchar(*(str + count));
	}

	_putchar('\n');
}

