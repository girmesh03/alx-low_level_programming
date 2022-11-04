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
		int coins , amount = 0;

		if (args == 1 || args > 2)
		{
				printf("Errror\n");
				return (0);
		}

		coins = atoi(argv[1]);

		while (coins > 0)
		{
				if (coins >= 25 )
						coins -= 25;
				else if (coins >= 10)
						coins -= 10;
				else if (coins >= 5)
						coins -=5;
				else if (coins >= 2)
						coins -= 2;
				else if (coins >= 1)
						coins -=1;

				amount += 1;
		}

		printf("%d\n", amount);

		return (0);

}

