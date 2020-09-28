#include "holberton.h"

/**
 * _puts - prints a line to stdout
 * Return: void
 * @str: string passed to function from main
 */

void _puts(char *str)
{
	char *print = str;

	while (*print)
	{
		_putchar(*print);
		print++;
	}
	_putchar('\n');
}
