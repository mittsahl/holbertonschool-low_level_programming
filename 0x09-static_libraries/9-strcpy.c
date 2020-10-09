#include "holberton.h"

/**
 * _strcpy - copys a string
 * Return: pointer to copy
 * @dest: destination of copy
 * @src: original string
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i]; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}

