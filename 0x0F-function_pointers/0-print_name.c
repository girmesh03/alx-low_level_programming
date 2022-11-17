#include "function_pointers.h"
#include <stddef.h>

/**
 * print_name - Prints a name.
 * @f: A pointer to a function.
 * @name: Name to be printed.
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	{
		return;
	}

	f(name);
}
