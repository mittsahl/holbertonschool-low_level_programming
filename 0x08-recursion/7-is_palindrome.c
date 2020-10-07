#include "holberton.h"

/**
 * is_palindrome - checks if a string is a palindrome
 * Return: check function
 * @s: string
 */

int is_palindrome(char *s)
{
	int length = _strlen(s);
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
}

/**
 * _strlen - returns the length of string s
 * Return: length
 * @s: string passed from main
 */

int _strlen(char *s)
{
	int length;
	char *start = s;

	for (length = 0; start[length] != '\0'; length++)
		;
	return (length);
}

