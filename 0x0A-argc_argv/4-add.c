#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Prints the number of arguments passed into it.
 * @argc: Number of command line arguments.
 * @argv: Array that contains the program command line arguments.
 * Return: 0 (Success) and 1 (Error).
 */

int main(int argc, char *argv[])
{
	int i, sum = 0;

	for (i = 1; i < argc; i++)
	{
		if (!isdigit(argv[i][0]))
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			add += atoi(argv[i]);
		}
	}

	printf("%d\n", add);
	return (0);
}
