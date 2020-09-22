#include <stdio.h>
#include "holberton.h"

/**
 * print_natural - prints sum of all numbers
 * divisible by 3 and 5 under 1024
 * Return: void
 */

int main(void)
{
	int i;
	int sum = 0;

	for (i = 0; i <= 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
			sum += i;
	}
	printf("%d\n", sum);
	return (0);
}
