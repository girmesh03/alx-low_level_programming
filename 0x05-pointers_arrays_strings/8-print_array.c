#include "main.h"
#include <stdio.h>

/**
 * print_array - Updates the value it points to to 98.
 * @a: Pointer.
 * @n: The number of elements of the array to be printed.
 * Return: void.
 */

void print_array(int *a, int n)
{
	int index;

	for (index = 0; index < n; ++index)
	{
		if (index != (n - 1))
		{
			printf("%d, ", a[index]);
		}
		else
		{
			printf("%d", a[index]);
		}
	}

	printf("\n");
}

