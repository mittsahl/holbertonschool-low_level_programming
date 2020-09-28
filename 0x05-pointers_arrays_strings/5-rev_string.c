#include "holberton.h"
#include <stdio.h>

/**
 * rev_string - reverses a string
 * Return: void
 * @s: string passed function from main
 */

void rev_string(char *s)
{
	int length;
	char *end = s;
	int i, tmp;

	for (length = 0; s[length] != '\0'; length++)
		end++;
	end--;
	for (i = 0; i < length / 2; i++)
	{
		tmp = *end;
		*end = s[i];
		s[i] = tmp;
		end--;
	}
}
