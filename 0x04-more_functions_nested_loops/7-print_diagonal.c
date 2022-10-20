#include "main.h"

/**
 * print_diagonal - Draws a diagonal line on the terminal.
 * @n: Number of diagonal lines to be drawn
 * Return: void.
 */

void print_diagonal(int n)
{
	int space;
	int counter;
	int loop;

	if (n <= 0)
	{
		_putchar('\n');
	}

	for (counter = 0; counter < n; counter++)
	{
		loop = counter - 1;

		for (space = 0; space <= loop; space++)
		{
			_putchar(' ');
		}
		_putchar(92);
		_putchar('\n');
	}

}
