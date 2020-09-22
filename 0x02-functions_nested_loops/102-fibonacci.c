#include <stdio.h>
#include "holberton.h"

/**
 * main - prints first  50 fibonacci numbers
 * Return: 0
 */

int main(void)
{
	int i;
	long first = 0;
	long second = 1;
	long sum;

	for (i = 0; i < 50; i++)
	{
		sum = first + second;
		first = second;
		second = sum;
		if (i < 49)
			printf("%li, ", sum);
		else
			printf("%li\n", sum);
	}
	return (0);
}
