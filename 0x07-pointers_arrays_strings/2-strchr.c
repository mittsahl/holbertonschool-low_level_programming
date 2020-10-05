#include "holberton.h"

/**
 * _strchr - finds a character in a string
 * Return: pointer ro char if found else nulll
 * @s: string passed from main
 * @c: character we are looking for
 */

char *_strchr(char *s, char c)
{
	int i;

	
	if (!c)
		return (0);
	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (&s[i]);
		if (s[i] == '\0')
			return (0);
		i++;
	}
	return (0);
}
