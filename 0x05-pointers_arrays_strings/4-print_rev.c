#include "holberton.h"

/**
 * print_rev - a function that prints a string, in reverse.
 * @str: the string to print in reverse
 *
 * Return: void
 */
void print_rev(char *str)
{
	int length;
	int i;

	length = 0;
	while (str[length] != '\0')
	{
		length++;
	}
	i = length - 1;
	for (; i >= 0; i--)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
