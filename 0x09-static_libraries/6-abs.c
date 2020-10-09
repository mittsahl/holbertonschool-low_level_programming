#include <stdio.h>
#include "holberton.h"

/**
 * _abs - returns absolute value of int
 * Return: absolute value of n
 * @n: int passed into function
 */

int _abs(int n)
{
	if (n > 0)
		return (n);
	if (n < 0)
		return (-n);
	else
		return (0);
}
