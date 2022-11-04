#include <stdio.h>
#include <stdlib.h>

/**
* main - Prints the minimum number of coins to make change.
* @argc: Number of arguments passed.
* @argv: Array that holds the arguments passed.
* Return: 0 (Success).
*/

int main(int argc, char *argv[])
{
	int coins, result = 0, iteration;

	if (argc == 2)
	{
		coins = atoi(argv[1]);

		for (iteration = 0; cents > 0; iteration++)
		{
			if (coins >= 25)
				coins -= 25;
			else if (coins >= 10)
				coins -= 10;
			else if (coins >= 5)
				coins -= 5;
			else if (coins >= 2)
				coins -= 2;
			else if (coins >= 1)
				coins -= 1;
			result += 1;
		}
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", result);
	return (0);
}

