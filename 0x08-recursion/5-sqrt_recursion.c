#include "holberton.h"

/**
 * _sqrt_recursion - function that returns the natural square root of a number.
 * @n: integer to find the natural square root of.
 * Return: the natural square root of n.
 */

int _sqrt_recursion(int n)
{
	int big, small;

	if (n < 0)
		return (-1);
	else if (n == 1)
		return (n);

	small = _sqrt_recursion(n / 4) * 2;
	big = small + 1;

	if (big * big > n)
		return (small);
	else
		return (big);
}


