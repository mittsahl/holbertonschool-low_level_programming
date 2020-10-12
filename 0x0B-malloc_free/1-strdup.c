#include <stdlib.h>
#include "holberton.h"

/**
* _strdup - returns a pointer to a new copy of a string in memory
* @str: string passed from main
* Return: NULL if str is NULL or if malloc fails else pointer to new string
*/

char *_strdup(char *str)
{
	int length = _strlen(str);
	char *copy;

	if (str == NULL)
		return (0);
	copy = malloc(length);
	if (copy == NULL)
		return (0);
	_strcpy(copy, str);
	return (copy);
}

/**
 * _strlen - returns the length of string s
 * Return: length
 * @s: string passed from main
 */

int _strlen(char *s)
{
	int length;
	char *start = s;

	for (length = 0; start[length] != '\0'; length++)
		;
	return (length);
}

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

