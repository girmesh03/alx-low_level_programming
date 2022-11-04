#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the number of arguments passed into it.
 * @argc: Number of command line arguments.
 * @argv: Array that contains the program command line arguments.
 * Return: 0 (Success) and 1 (Error).
 */

int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		int first_num = atoi(argv[1]);
		int second_num = atoi(argv[2]);

		int result = first_num * second_num;

		printf("%d\n", result);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}
