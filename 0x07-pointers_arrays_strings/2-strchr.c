#include "holberton.h"

/**
 * _strchr - finds a character in a string
 * Return: pointer ro char if found else nulll
 * @s: string passed from main
 * @c: character we are looking for
 */

char *_strchr(char *s, char c)
{
	char *ch = s;
	int i;

	for (i = 0; s[i]; i++, ch++)
	{
		if (s[i] == c)
			return (ch);
		if (s[i] == '\0')
			return (0);
	}
	return (0);
}
