#include <stdlib.h>
#include "holberton.h"

/**
* string_nconcat - concatenates n bytes of s2 with s1
* @s1: string from main
* @s2: string from main
* @n: number of bytes to concatenate from s2
* Return: pointer to new string
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int s1length, bufIdx, s2Idx;
	char *buf;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	s1length = _strlen(s1);
	buf = malloc((s1length + (int)n + 1) * sizeof(char));
	if (buf == NULL)
		return (NULL);
	for (bufIdx = 0; s1[bufIdx]; bufIdx++)
		buf[bufIdx] = s1[bufIdx];
	for (s2Idx = 0; s2Idx < (int)n; s2Idx++)
		buf[bufIdx + s2Idx] = s2[s2Idx];
	s2Idx++;
	buf[bufIdx + s2Idx] = '\0';
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
