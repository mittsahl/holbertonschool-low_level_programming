#include <stdlib.h>
#include "holberton.h"

/**
* string_nconcat - concatenates n bytes of s2 to s1 
* @s1: string from main
* @s2: string from main
* @n: number of bytes to be concatenated
* Return: pointer to new string
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *buf;
	char *tmp;	
	
	if (s1 == NULL)
		return (s2);
	if (s2 == NULL || n <= 0)
		return (s1);
	if (s1 == NULL && s2 == NULL)
		return (NULL);
	tmp = malloc(n + 1);
	if (tmp == NULL)
		return (NULL);
	tmp = _strncpy(tmp, s2, (int)n);
	tmp[n + 1] = '\0';
	buf = malloc(_strlen(tmp) + _strlen(s1));
	if (buf == NULL)
		return (NULL);
	buf = str_concat(s1, tmp);
	free(tmp);
	return (buf);
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
