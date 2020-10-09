#include "holberton.h"

/**
 * _memcpy - copies n bytes frmo src to dest
 * Return: pointer to dest
 * @dest: destination of bytes
 * @src: source of bytes
 * @n: number of bytes to be passed
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
