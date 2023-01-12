#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - generates a keygen for 103-keygenme
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 on success, 1 on error
 */

int main(int __attribute__((__unused__)) argc, char *argv[])
{
	int i, sum, len;
	char *key;

	if (argv[1] == NULL)
	{
		printf("Usage: %s <key>\n", argv[0]);
		return (1);
	}
	len = strlen(argv[1]);
	key = malloc(sizeof(char) * (len + 1));
	if (key == NULL)
		return (1);
	for (i = 0, sum = 0; i < len; i++)
	{
		key[i] = argv[1][i] ^ 59;
		sum += key[i];
	}
	key[i] = (sum % 128) ^ 79;
	key[i + 1] = '\0';
	printf("%s", key);
	free(key);
	return (0);
}
