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
	int index = 0, counter = 0, value, multiplier;
	char *string;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (counter = 0; counter < ac; counter++)
	{
		for (value = 0; av[counter][value]; value++)
			multiplier++;
	}

	string = malloc((multiplier) * sizeof(char));

	if (string == NULL)
		return (NULL);

	counter = 0;

	while (counter < ac)
	{
		for (value = 0; av[counter][value]; value++)
			string[index++] = av[counter][value];

		string[index++] = '\n';
		counter++;
	}

	string[multiplier] = '\0';
	return (string);
}
