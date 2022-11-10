#include "main.h"
#include <stdio.h>
#include <stdlib.h>

void print_num(unsigned long);

/**
 * print_num - Print the number passed to it.
 * @n: The value to printed.
 * Return: void.
 */

void print_num(unsigned long n)
{
	unsigned long value = n;

	if (value <= 0)
	{
		_putchar('\n');
		return;
	}

	if (value / 10)
		print_num(value / 10);

	_putchar(48 + (value % 10));
}

/**
* main - Multiplies two positive numbers
* @argc: Number of arguments.
* @argv: args.
* Return: int.
*/

int main(int argc, char *argv[])
{
	int i, j;
	unsigned long product;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		exit(98);

	}

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (argv[i][j] < 48 || argv[i][j] > 57)
			{
				printf("Error\n");
				exit(98);
			}
		}
	}

	product = atol(argv[1]) *  atol(argv[2]);

	print_num(product);

	return (0);
}

