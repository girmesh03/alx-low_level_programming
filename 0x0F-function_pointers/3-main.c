
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
	char *select_operator = argv[2];

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	else if (get_op_func(select_operator) == NULL
			|| select_operator[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	else if ((select_operator[2] == '/' && atoi(argv[3]) == 0) ||
			(select_operator[2] == '%' && atoi(argv[3]) == 0))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", get_op_func(argv[2])(atoi(argv[1]), atoi(argv[3])));

	return (0);
}
