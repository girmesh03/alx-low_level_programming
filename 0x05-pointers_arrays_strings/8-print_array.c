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
	int i;
	int j;

	if (n > 0)
	{
		for (i = 0; i < n - 1; i++)
		{
			for (j = 0; j < n - 1; j++)
			{
				if (a[j] > a[j + 1])
				{
					int tmp = a[j];

					a[j] = a[j + 1];
					a[j + 1] = tmp;
				}
			}
		}

		for (index = 0; index < n; index++)
		{
			printf("%d", *(a + index));

			if (index != n - 1)
			{
				printf(",");
				printf(" ");
			}

		}
		printf("\n");
	}
}

