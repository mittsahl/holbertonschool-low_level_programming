#include "holberton.h"

/**
 * _print_rev_recursion - prints  string in reverse using recursion
 * Return: void
 * @s: pointer to char passed from main
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
