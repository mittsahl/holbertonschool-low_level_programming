#include <stdio.h>
#include "holberton.h"

/**
 * print_last_digit - prints last digit of an integer
 * Return: last digit
 * @n: int passed into function
 */

int print_last_digit(int n)
{
	if (n > 0)
	{	_putchar(n % 10 + '0');
		return (n % 10);
	}
	else
	{
		_putchar(-n % 10 + '0');
		return (-n % 10);
	}
}
