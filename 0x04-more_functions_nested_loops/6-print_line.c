#include "main.h"

/**
 * print_line - Draws a straight line in the terminal.
 * @n: Number of line to be drawn
 * Return: void.
 */

void print_line(int n)
{
	int counter = 0;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}
	while (counter <= n)
	{
		_putchar(45);
		counter++;
	}
	_putchar('\n');
}
