#include "main.h"

/**
 * _puts_recursion - Prints a string, followed by a new line.
 * @s: A pointer to sttring.
 * Return: void.
 */

void _puts_recursion(char *s)
{
	int i = 0;

	if (s[i] == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_putchar(*(s + i));
		i++;
		_puts_recursion(s + i);
	}
}
