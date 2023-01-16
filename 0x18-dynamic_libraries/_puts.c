#include "main.h"

/**
 * _puts - prints a string, followed by a new line, to stdout
 * @str: string to print
 * Return: void
 */

void _puts(char *str)
{
	/* declare a variable to hold the length of the string */
	int index = 0;

	/* loop through the string until the null byte is reached */
	while (str[index] != '\0')
	{
		/* print the character at the current index */
		_putchar(str[index]);
		/* increment the index variable */
		index++;
	}
	/* print a new line */
	_putchar('\n');
}
