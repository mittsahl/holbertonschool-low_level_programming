#include "holberton.h"

/**
 * _strcmp - compares two strings
 *  Return: difference between the strings
 *  @s1: string from main
 *  @s2: string from main
 */

int _strcmp(char *s1, char *s2)
{
	for (; *s1 == *s2; s1++, s2++)
		;
	return (*s1 -*s2);
}
