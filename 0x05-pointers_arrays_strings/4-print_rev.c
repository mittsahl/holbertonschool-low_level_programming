#include "holberton.h"

/**
 * print_rev - prints reverse of string
 * Return: void
 * @s: string frmo main passed to function
 */

void print_rev(char *s)
{
	char *ch = s;
	int length;

	for (length = 0; s[length] != '\0'; length++)
		ch++;
	ch--;
	for (; length >= 0; length--)
	{
		_putchar(*ch);
		ch--;
	}
	_putchar('\n');
}
