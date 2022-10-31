#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the
 *					two diagonals of a square
 *					matrix of integers.
 * @a: a pointer to 2D array
 * @size: column size
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int row = 0;
	int column = 0;
	int i = 0, j = 0;

	int sum_1 = 0, sum_2 = 0;

	for (i = 0; i < size; i++)
	{
		sum_1 += *(a + ((row * size) + column));
		row++;
		column++;
	}

	row = size - 1;
	column = 0;

	for (j = 0; j < size; j++)
	{
		sum_2 += *(a + ((row * size) + column));
		row--;
		column++;
	}

	printf("%d, %d\n", sum_1, sum_2);

}
