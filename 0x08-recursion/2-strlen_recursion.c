#include "holberton.h"

/**
 * _strlen_recursion - finds the length of string recursively
 * Return: length of string
 * @s: string from main
 */

int _strlen_recursion(char *s)
{
	if (*s)
	{
		s++;
		return (_strlen_recursion(s) + 1);
	}
	return (0);
}
