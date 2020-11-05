#include <stdio.h>
#include "holberton.h"

/**
 * binary_to_uint - converts a binary string of 1's and 0's to a unsigned int
 * @b: string of 1's and 0's
 * Return: 0 if b is NULL or non 1 or 0 characters else unsigned
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int len, ans = 0;

	len = _strlen((char *)b);
	len--;
	while (*b)
	{
		if (*b == '1')
			ans += power(2, len);
		else if (*b != '0')
			return (0);
		len--;
		b++;
	}
	return (ans);
}

/**
 * power - calculates a to the power of b
 * @a: int from main
 * @b: int from amin
 * Return: answer
 */

int power(int a, int b)
{
	if (b > 0)
		return (a * power(a, b - 1));
	else
		return (1);
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
