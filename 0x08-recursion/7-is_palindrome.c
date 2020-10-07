#include "holberton.h"
#include <stdio.h>

/**
 * is_palindrome - checks if string is a palindrome
 * @s: The string
 * Return: 1 if palindrome, 0 if not.
 */

int is_palindrome(char *s)
{
	int length = _strlen_recursion(s);

	if (length < 2)
		return (1);

	if (*s == *(s + length))
	{
		printf("%c, %c\n", *s, s[length]);
		*(s + length) = '\0';
		return (is_palindrome(s + 1));
	}
	else
		return (0);

}

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

