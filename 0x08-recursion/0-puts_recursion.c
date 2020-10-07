#include "holberton.h"

/**
 * _puts_recursion - puts function using recursion
 * Return: void
 * @s: string from main
 */
void _puts_recursion(char *s)
{
	if (!*s)
		_putchar('\n');
	else
	{
		_putchar(*s);
		s++;
		_puts_recursion(s);
	}
}
