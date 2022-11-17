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
int main(int __attribute__((__unused__)) argc, char **argv)
{
	int first_number = atoi(argv[1]);
	int second_number = atoi(argv[3]);
	char *select_operator;

	select_operator = argv[2];

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
	else if ((*select_operator == '/' && second_number == 0) ||
			(*select_operator == '%' && second_number == 0))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", get_op_func(select_operator)(first_number,
				second_number));
	return (0);
}

