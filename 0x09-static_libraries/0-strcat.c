#include "holberton.h"

/**
 * _strcat - concatenates two strings
 * Return: dest;
 * @src: src of first string
 * @dest: where both concat strings will end up
 */

char *_strcat(char *dest, char *src)
{
	int destLength, i;

	for (destLength = 0; dest[destLength]; destLength++)
		;
	for (i = 0; i < destLength + 1 && src[i] != '\0'; i++)
	{
		dest[destLength + i] = src[i];
	}
	dest[destLength + i] = '\0';
	return (dest);

}
