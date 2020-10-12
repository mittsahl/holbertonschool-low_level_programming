#include <stdlib.h>
#include "holberton.h"

/**
* str_concat - concatenates two strings
* @s1: string from main
* @s2: string from main
* Return: if failure NULL else new string
*/

char *str_concat(char *s1, char *s2)
{
	int firstLength = _strlen(s1);
	int secondLength = _strlen(s2);
	char *middle;
	char *concat;

	if (s1 == 0)
		return (s2);
	if (s2 == 0)
		return (s1);
	concat = malloc(firstLength + secondLength + 1);
	middle = &concat[firstLength];
	if (concat == 0)
		return (0);
	_strcpy(concat, s1);
	_strcpy(middle, s2);
	return (concat);
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

