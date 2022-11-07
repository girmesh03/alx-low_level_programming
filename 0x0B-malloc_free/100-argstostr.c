#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of your program.
 * @ac: argc
 * @av: argv
 * Return: a pointer to a new string
 */

char *argstostr(int ac, char **av)
{
	int index = 0, counter, value, multiplier;
	char *string;

	if (ac == 0 || av == NULL)
		return (NULL);

	multiplier = ac;

	for (counter = 0; counter < ac; counter++)
	{
		for (value = 0; av[counter][value]; value++)
			multiplier++;
	}

	string = malloc((multiplier + 1) * sizeof(char));

	if (string == NULL)
		return (NULL);

	for (counter = 0; counter < ac; counter++)
	{
		for (value = 0; av[counter][value]; value++)
			string[index++] = av[counter][value];

		string[index++] = '\n';
	}

	string[multiplier] = '\0';
	return (string);
}
