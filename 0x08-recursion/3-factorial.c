#include "holberton.h"

/**
 * factorial - finds factorial of a int n
 * Return: factorial
 * @n: int from main
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
