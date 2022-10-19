#include"main.h"
#include <stdio.h>

/**
 * main - Function
 * Description: Computes the sum of all
 * Return: Always 0 (Success)
*/

int main(void)
{
	int sum = 0;
	int i;

	for (i = 0; i < 1024; i++)
		{
		if (i % 3 == 0)
			sum += i;
		else if (i % 5 == 0)
			sum += i;
		}
	printf("%d\n", sum);
	return (0);
}
