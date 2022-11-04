#include "main.h"

/**
 * _puts - Prints a string to stdout.
 * @str: String pointer.
 * Return: Always 0.
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
