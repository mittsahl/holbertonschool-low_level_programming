#include "holberton.h"

/**
 * swap_int - swaps two integers
 * Return: void
 * @a: int passed to function from main
 * @b: int passed to function from main
 */

void swap_int(int *a, int *b)
{
	int tmp = *a;
	*b =  *a;
	*a = tmp;
}
