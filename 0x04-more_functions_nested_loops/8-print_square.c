#include "main.h"

/**
 * print_square -  Prints a square.
 * @size: Size of a square: n * n.
 * Return: void.
 */

void print_square(int size)
{
	int row;
	int column;

	if (size <= 0)
	{
		_putchar('\n');
	}
	for (column = 0; column < size; column++)
	{
		for (row = 0; row < size; row++)
		{
			_putchar(35);
		}
		_putchar('\n');
	}

}
