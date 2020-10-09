#include "holberton.h"

/**
 * _atoi - converts a string to an integer
 * @s: string passed to function from main
 * Return: the value of int
 */

int _atoi(char *s)
{
	int num, i, sign = 1;

	for (i = 0; (s[i] < '0' || s[i] > '9') && s[i] != '\0'; i++)
		sign = (s[i] == '-') ? -1 : 1;
	for (num = 0; s[i] >= '0' && s[i] <= '9'; ++i)
		num = 10 * num + (s[i] - '0');
	return (sign * num);
}

