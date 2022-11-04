#include "main.h"

/**
 * print_chessboard - prints the chessboard.
 * @a: a pointer to 2D array
 * Return: void
 */

void print_chessboard(char (*a)[8])
{
	int row = 0;
	int column = 0;

	for (row = 0; a[row][7]; row++)
	{
		for (column = 0; column < 8; column++)
		{
			_putchar(a[row][column]);
		}
		_putchar('\n');
	}
}
