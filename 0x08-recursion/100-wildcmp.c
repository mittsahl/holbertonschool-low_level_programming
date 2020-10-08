#include "holberton.h"

/**
 * wildcmp - compares strings accounting for a wildcard
 * Return: 1 if same else 0
 * @s1: string from main
 * @s2: string from main
 */

int wildcmp(char *s1, char *s2)
{
	while (*s1 != '\0')
	{
		if (*s2 == '*')
		{
			while (*++s2 == '*')
				continue;
			if (*s2 == '\0')
				return (1);
			while (wildcmp(s1, s2) == 0 && *s1 != '\0')
				s1++;
			return ((*s1 != '\0') ? 1 : 0);
		}
		if (*s2 != '?' && *s2 != *s1)
			return (0);
		s1++;
		s2++;
	}
	while (*s2 == '*')
		s2++;
	return ((*s2 == '\0') ? 1 : 0);
}
