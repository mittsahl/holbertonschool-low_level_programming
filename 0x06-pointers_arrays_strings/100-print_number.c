#include "holberton.h"

/**
 * print_number - a function that prints an integer
 * Return: void
 * @n: int passed to function on main
 */

void print_number(int n)
{
	if (n < 0 && n > -2147483648)
	{
		n = -n;
		_putchar('-');
	}

	if (n / 10)
	{
		print_number(n / 10);
	}
	if (n < 0)
		_putchar(((n % 10) * -1) + '0');
	else
		_putchar((n % 10) + '0');
