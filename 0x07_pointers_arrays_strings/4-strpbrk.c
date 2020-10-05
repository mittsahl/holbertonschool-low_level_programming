#include "holberton.h"

/**
 * _strpbrk - locates first occurence of s in accept
 * Return: pointer to bytes in s else NULL
 * @s: string passed from main
 * @accept: bytes to look for
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;
	char *ch;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				ch = &s[i];
				return (ch);
			}
		}
	}
	return (0);
}
