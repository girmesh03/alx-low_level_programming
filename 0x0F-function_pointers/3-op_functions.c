#include "3-calc.h"
#include <stdlib.h>

/*Function prototyping*/
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - Addition of two numbers.
 * @a: The first number.
 * @b: The second number.
 * Return: The sum first number and second number.
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Subtraction of two numbers.
 * @a: The first number.
 * @b: The second number.
 * Return: Difference of first number and second number.
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Product of two numbers.
 * @a: The first number.
 * @b: The second number.
 * Return: The product of first number and second number.
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Preform division.
 * @a: The first number.
 * @b: The second number.
 * Return: The quotient.
 *
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - preforms module.
 * @a: The first number.
 * @b: The second number.
 * Return: The remainder.
 *
 */

int op_mod(int a, int b)
{
	return (a % b);
}
