#include <stdio.h>
#include "3-calc.h"
#include <stdlib.h>

/**
 * main - Prints the result of simple operations.
 * @argc: Number of argument.
 * @argv: A pointer to a pointer string input.
 * Return: 0 on success or 98 on error.
 *
 */

int main(int argc, char *argv[])
{
	int first_number;
	int second_number;
	int result;

	if (argc == 4)
	{
		first_number = atoi(argv[1]);
		second_number = atoi(argv[3]);
		result = get_op_func(argv[2])(first_number, second_number);

		printf("%d\n", result);

		return (0);
	}
	else
	{
		printf("Error\n");
		return (98);
	}
}
