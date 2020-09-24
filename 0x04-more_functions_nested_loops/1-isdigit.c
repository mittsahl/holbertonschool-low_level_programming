#include "holberton.h"

/**
 * _isdigit - tells if int is a digit
 * Return: 1 if number else 0
 * @c: int passed to functio
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
