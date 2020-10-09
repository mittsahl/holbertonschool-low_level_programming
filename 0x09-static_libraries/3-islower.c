#include <stdio.h>
#include "holberton.h"

/**
 * _islower - checks if char is lowercase
 * @c: char passed as arg
 * Return: 1 if lowercase, else 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
