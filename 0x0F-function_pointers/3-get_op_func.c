#include "3-calc.h"
#include <stddef.h>

/**
 * get_op_func - A pointer to a function which returns a function pointer
 * and responsible for operation selection.
 * @s: A pointer to char of operation.
 * Return: A pointer to the selected operation.
 *
 */

int (*get_op_func(char *s))(int, int)
{
	int index = 0;

	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	while (ops[index].op != NULL && *(ops[index].op) != *s)
	{
		index++;
	}

	return (ops[index].f);
}
