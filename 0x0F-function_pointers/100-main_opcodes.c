#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the opcodes of its own main function.
 * @argc: Number of argument count.
 * @argv: A pointer to pointer to string(char) input
 * Return: On success(0), else 1 or 2;
 *
 */

int main(int argc, char **argv)
{
	int index;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	if (atoi(argv[1]) < 0)
	{
		printf("Error\n");
		return (2);
	}
	for (index = 0; index < atoi(argv[1]); index++)
	{
		printf("%02x", ((unsigned char *)main)[index]);
		printf("%c", index < atoi(argv[1]) - 1 ? ' ' : '\n');
	}

	return (0);
}
