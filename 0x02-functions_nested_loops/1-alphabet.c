#include <stdio.h>
#include "holberton.h"

/**
 * print_alphabet  - prints alphabet
 * Return: 0 upon completion
 */

void print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
		_putchar(i);
	_putchar('\n');
}