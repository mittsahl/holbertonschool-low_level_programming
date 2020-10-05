#include "holberton.h"

/**
 * _memset - fills first n btyes of memory to certain char
 * Return: pointer to memory area
 * @s: pointer to memory area
 * @b: char to be set
 * @n: number of bytes to be set
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	char *start = s;

	for (i = 0; i < n; i++, start++)
		*start = b;
	return (s);
}
