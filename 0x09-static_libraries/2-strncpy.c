#include "holberton.h"

/**
 * _strncpy - copies a string up to n bytes
 * Return: dest
 * @src: source of copied bytes
 * @dest: where the copied bytes are going
 * @n: number of copied bytes
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i]; i++)
		dest[i] = src[i];
	for (; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
