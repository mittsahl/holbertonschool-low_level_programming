#include "holberton.h"

/**
 * _strstr - finds first occurence of needle in haystack
 * Return: pointer to needle in haystack else null
 * @needle: what we are looking for
 * @haystack: where we are looking
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i]; i++)
	{
		for (j = 0; needle[j] == haystack[i + j]; j++)
		{
			if (!needle[j])
				break;
		}
		if (!needle[j])
			return (&haystack[i]);
	}
	return (0);
}
