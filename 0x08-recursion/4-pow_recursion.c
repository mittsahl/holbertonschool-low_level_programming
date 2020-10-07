#include "holberton.h"

/**
 * _pow_recursion - finds x to power of y recursivelt
 * Return: answer
 * @x: base number
 * @y: exponent
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	y--;
	return (x * _pow_recursion(x, y));
}
