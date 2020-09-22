#include <stdio.h>
#include "holberton.h"

/**
 * print_to_98 - prints from n to 98
 * Return: void
 * @n: int passed to function
 */

void print_to_98(int n)
{
	int i;

	if (n > 98)
	{
		for (i = n; i >= 98; i--)
		{
			     printf("%d", i);
			     if (i != 98)
				     printf(", ");
		}
		putchar('\n');
	}
	if (n < 98)
	{
		for (i = n; i <= 98; i++)
		{
			printf("%d", i);
			if (i != 98)
				printf(", ");
		}
		putchar('\n');
	}
	if (n == 98)
		printf("%d\n", 98);
}
