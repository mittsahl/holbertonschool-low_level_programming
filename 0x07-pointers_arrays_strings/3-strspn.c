#include "holberton.h"

/**
 * _strspn - returns the number of bytes in s that match accept
 * Return: number of bytes
 * @s: string passed from main
 * @accept: bytes to be matched
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int bytes = 0;
	int i, j;

	if (accept == '\0' || s == '\0')
		return (0);
	for (i = 0; s[i] != ' '; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
				bytes++;
		}
	}
	return (bytes);
}
