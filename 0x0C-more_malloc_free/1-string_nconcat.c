#include <stdlib.h>
#include "holberton.h"

/**
* string_nconcat -  
* @s1: string passed from main
* @s2:  string passed from main
* @n: number of bytes from s2 to be added to buffer
* Return: pointer to new mem else null
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int bufIdx, s2Idx, length;
	char *buf;

	if (s2 == NULL)
		length = 0;
	else
		length = _strlen(s2);
	if (length > (int) n)
		length = (int)n;
	buf = malloc(_strlen(s1) + length + 1);
	if (buf == NULL)
		return (NULL);
	for (bufIdx = 0; s1[bufIdx]; bufIdx++)
		buf[bufIdx] = s1[bufIdx];
	for (s2Idx = 0; s2Idx < length; s2Idx++)
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
