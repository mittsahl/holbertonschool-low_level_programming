#include "holberton.h"

/**
 * leet - changes string to leet
 * Return: string
 * @s: string passed from main
 */

char *leet(char *s)
{
	char *letters = "aAeEoOtTlL";
	char *numbers = "4433007711";
	int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; letters[j]; j++)
		{
			if (letters[j] == s[i])
				s[i] = numbers[j];
		}
	}
	return (s);
}
