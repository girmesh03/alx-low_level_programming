#include "main.h"
#include <stdio.h>
#include <stdlib.h>

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

	if (argc == 3)
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j]; j++)
			{
				if (argv[i][j] > 57 || argv[i][j] < 48)
				{	printf("Error\n");
					exit(98);
				}
			}

		}
	}
	else
	{
		printf("Error\n");
		exit(98);
	}

	product = atol(argv[1]) *  atol(argv[2]);
	printf("%lu\n", product);

	return (0);
}

