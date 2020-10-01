#include "holberton.h"

/**
 * cap_string - capitalizes all words of a string
 * Return: pointer to string
 * @s: string passed from main
 */

char *cap_string(char *s)
{
	int i;

	for (i = 0; s[i]; i++)
	{
		if (i == 0 && _islower(s[i]) == 1)
			s[i] -= 32;
		if ((s[i] == ' ' || s[i] == '\t' || s[i] == '\n') && _islower(s[i + 1]) == 1)
			s[i + 1] -= 32;
		if ((s[i] == ',' || s[i] == ';' || s[i] == '.') && _islower(s[i + 1]) == 1)
			s[i + 1] -= 32;
		if ((s[i] == '!' || s[i] == '?' || s[i] == '"') && _islower(s[i + 1]) == 1)
			s[i + 1] -= 32;
		if ((s[i] == '(' || s[i] == ')' || s[i] == '{') && _islower(s[i + 1]) == 1)
			s[i + 1] -= 32;
		if (s[i] == '}' && _islower(s[i + 1]) == 1)
			s[i + 1] -= 32;
	}
	return (s);
}

/**
 * _islower - checks if char is lowercase
 * @c: char passed as arg
 * Return: 1 if lowercase, else 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

