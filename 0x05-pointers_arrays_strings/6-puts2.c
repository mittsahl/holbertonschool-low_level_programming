#include "holberton.h"

/**
 * puts2 - prints every other character of string
 * Return: void
 * @s: string passed to function from main
 */

void puts2(char *s)
{
	int i;

	for (i = 0; s[i]; i += 2)
		_putchar(s[i]);
	_putchar('\n');
}
