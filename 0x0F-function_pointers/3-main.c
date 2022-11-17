
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
	char *select;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	first_number = atoi(argv[1]);
	select = argv[2];
	second_number = atoi(argv[3]);

	if (get_op_func(argv[2]) == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	if ((*select == '/' && second_number == 0) ||
			(*select == '%' && second_number == 0))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", get_op_func(argv[2])(first_number, second_number));

	return (0);
}

