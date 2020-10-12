#include <stdlib.h>
#include "holberton.h"

/**
* string_nconcat - concatenates n bytes from s2 and s1
* @s1: string passed from main
* @s2:  string passed from main
* @n: number of bytes from s2 to be added to buffer
* Return: pointer to new mem else null
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int bufIdx, s2Idx, s1length, s2length;
	char *buf;

	if (s1 == NULL && s2 == NULL)
		return ("");
	if (s1 != NULL)
		s1length = _strlen(s1);
	else 
		s1length = 0;
	if (s2 != NULL)
		s2length = _strlen(s2);
	else
		s2length = 0;
	if (s2length > (int)n)
		s2length = n;
	buf = malloc(s1length + s2length + 1);
	if (buf == NULL)
		return (NULL);
	bufIdx = 0;
	if (s1 != NULL)
	{
		for (; s1[bufIdx]; bufIdx++)
			buf[bufIdx] = s1[bufIdx];
	}
	if (s2 != NULL)
	{
		for (s2Idx = 0; s2Idx < (int)n && s2[s2Idx]; s2Idx++)
			buf[bufIdx + s2Idx] = s2[s2Idx];
	}
	buf[bufIdx + s2Idx + 1] = '\0';
	return (buf);
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
