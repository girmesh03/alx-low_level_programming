#include"main.h"

/**
 * print_triangle - Prints a triangle.
 * @size: Size of the triangle
 * Returns: void
 */

void print_triangle(int size)
{
	int loop;
	int noSymbol;
	int symbol;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (loop = 1; loop <= size; loop++)
		{
			for (noSymbol = size - loop; noSymbol > 0; noSymbol--)
			{
				_putchar(' ');
			}

			for (symbol = 0; symbol < loop; symbol++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
