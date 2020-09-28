#include "holberton.h"

/**
 * puts_half - prints half a string
 * Return: void
 * @str: string passed from main
 */

void puts_half(char *str)
{
	int i;
	int half;

	for (i = 0; str[i]; i++)
		;
	if (i % 2 == 0)
		half = i / 2;
	else
		half = i - 1 / 2;
	for (; str[half]; half++)
		_putchar(str[half]);
	_putchar('\n');
}


