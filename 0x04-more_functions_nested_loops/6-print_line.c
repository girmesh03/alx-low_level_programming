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
	}
	else
	{
		while (counter < n)
		{
			_putchar('_');
			counter++;
		}
		_putchar('\n');
	}
}
