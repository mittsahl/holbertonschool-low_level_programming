#include "holberton.h"

/**
 * puts_half - prints half of a string
 * @str: pointer to string from main
 * Return: void
 */
void puts_half(char *str)
{
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
		;
	j = 0;
	if (i % 2 != 0)
		j = (i - 1) / 2;
	else
		j = i / 2;

	for (; j > 0; j--)
		_putchar(str[i - j]);

	_putchar('\n');
}
