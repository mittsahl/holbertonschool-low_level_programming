#include "holberton.h"

/**
 * rot13 - encodes a string in rot13
 * Return: string
 * @s: string passed to function from main
 */
char *rot13(char *s)
{
	char *alphabet = "aAbBcCdDeEfFgGhHiIjJkKlLmMnNoOpPqQrRsStTuUvVwWxXyYzZ";
	char *rot = "nNoOpPqQrRsStTuUvVwWxXyYzZaAbBcCdDeEfFgGhHiIjJkKlLmM";
	int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; alphabet[j]; j++)
		{
			if (alphabet[j] == s[i])
			{
				s[i] = rot[j];
				break;
			}
		}
	}
	return (s);
}
