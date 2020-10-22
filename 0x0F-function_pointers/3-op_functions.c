#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * op_add - adds two ints
 * @a: int from main
 * @b: int from main
 * Return: sum
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts two ints
 * @a: int from main
 * @b: int from main
 * Return: a -b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies two ints
 * @a: int from main
 * @b: int from main
 * Return: product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides two ints
 * @a: int from main
 * @b: int from main
 * Return: a /b
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - a % b
 * @a: int from main
 * @b: int from main
 * Return: a %b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
