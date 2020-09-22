#include <stdio.h>
#include "holberton.h"

/**
 * print_alphabet_x10 - prints alphabet 10x
 * Return: void
 */

void print_alphabet_x10(void)
{
	int i;
	int letter;

	for (i = 0; i <= 10; i++)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
			_putchar(letter);
		_putchar('\n');
	}
}

