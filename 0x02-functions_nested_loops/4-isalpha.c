#include "holberton.h"

/**
 * _isalpha - checks if a char is a letter
 * Return: 0 if not, 1 if it is a letter
 * @c: ASCII value passed into function
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
