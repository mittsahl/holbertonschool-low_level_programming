#include <stdio.h>
#include "holberton.h"

/**
* print_binary - prints binary version of a number
* @n: number from main
* Return: void
*/

void print_binary(unsigned long int n)
{
	if (n == 1)
	{
		putchar(1 + '0');
		return;
	}
	if (n > 0)
		print_binary(n >> 1);
	putchar((n & 1) + '0');

}

