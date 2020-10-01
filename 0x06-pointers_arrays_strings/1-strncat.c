#include "holberton.h"

/**
 * _strncat - concatenates two strings up to n bytes
 * Return: dest;
 * @src: src of copied bytes
 * @dest: where bytes are copied to
 * @n: number of bytes to be copied
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, destLength;

	for (destLength = 0; dest[destLength]; destLength++)
		;
	for (i = 0; i < n && src[i]; i++)
		dest[destLength + i] = src[i];
	dest[destLength + i] = '\0';
	return (dest);
}
