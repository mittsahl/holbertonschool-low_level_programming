#include "holberton.h"

/**
 * print_sign - prints sign of neg or pos int
 * Return: 1 if positive 0 if 0 -1 if neg
 * @n: integer pass in
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
