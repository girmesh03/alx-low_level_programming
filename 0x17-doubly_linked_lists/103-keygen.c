#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Generates and prints passwords for the crackme5 executable.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 * Return: 0 if successful, 1 otherwise.
 */

int main(int argc, char *argv[])
{
	int i, len, sum;
	char password[7];

	if (argc != 2)
	{
		printf("Usage: %s key\n", argv[0]);
		return (1);
	}

	len = strlen(argv[1]);
	if (len != 5)
	{
		printf("Key must be 5 characters\n");
		return (1);
	}

	sum = 0;
	for (i = 0; i < len; i++)
	{
		sum += argv[1][i];
	}

	srand(sum ^ 14);
	for (i = 0; i < 5; i++)
	{
		password[i] = rand() ^ argv[1][i];
	}

	password[i] = '\0';
	printf("%s\n", password);

	return (0);
}
