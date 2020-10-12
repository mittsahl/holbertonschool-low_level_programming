#include <stdlib.h>
#include "holberton.h"

/**
* argstostr - concatenates all the arguments of a program
* @ac: number of arguments
* @av: array of arguments
* Return: string of all them concatenated
*/

char *argstostr(int ac, char **av)
{
	char *finalString;
	char *tmp;
	char *newline = "\n";
	int i;

	if (ac == 0)
		return (0);
	if (av == 0)
		return (0);
	finalString = malloc(_strlen(av[0]));
	if (finalString == 0)
		return (0);
	_strcpy(finalString, av[0]);
	finalString = str_concat(finalString, newline);
	for (i = 1; i < ac; i++)
	{
		tmp = malloc(_strlen(av[i]));
		_strcpy(tmp, av[i]);
		tmp = str_concat(tmp, newline);
		finalString = str_concat(finalString, tmp);
	}
	return (finalString);
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

