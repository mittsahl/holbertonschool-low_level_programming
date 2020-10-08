#include "holberton.h"

/**
 * is_palindrome - checks if a string is a palindrome
 * Return: check function
 * @s: string
 */

int is_palindrome(char *s)
{
	int length = _strlen_recursion(s);
	int start = 0;

	length--;
	return (check_Pal(length, start, s));
}

/**
 * check_Pal - checks if a stirng is a palindrome
 * Return: check function
 * @s: string from main
 * @start: start of string
 * @length: length of the string
 */

int check_Pal(int length, int start, char *s)
{
	if (start == length || length - start == 1)
		return (1);
	if (s[start] != s[length])
		return (0);
	if (s[start] == s[length])
		return (check_Pal(length - 1, start + 1, s));
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


