#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int printf(const char *format, ...)
{
	write(1, "64 55 17 39 11 - 9\n", 17);
	write(1, "Congratulations, you win the Jackpot!\n", 16);
	exit(EXIT_SUCCESS);
}
