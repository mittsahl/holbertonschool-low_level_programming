#include <stdio.h>
#include "holberton.h"

/**
 * main - prints Holberton
 * Return: 0 on completion
 */

int main(void)
{
	char h[] = "Holberton";
	int i;

	for (i = 0; h[i] != '\0'; i++)
		_putchar(h[i]);
	_putchar('\n');
	return (0);
}
