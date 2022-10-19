#include "main.h"
#include <stdio.h>

/**
 * main - prints fibonacci numbers starting from 1
 * Return: On successs (0)
 */

int main(void)
{
	int a = 1;
	int b = 2;
	int result;
	int i;

	for (i = 1; i <= 50; i++)
	{
		printf("%d", a);
		if (i < 50)
		{
			_putchar(',');
			_putchar(' ');
		}
		result = a + b;
		a = b;
		b = result;
	}
	printf("\n");
	return (0);
}
