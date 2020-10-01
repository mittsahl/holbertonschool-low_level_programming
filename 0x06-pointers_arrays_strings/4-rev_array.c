#include "holberton.h"
#include <stdio.h>

/**
 * reverse_array - reverses an array;
 * Return: void
 * @a: pointer to the array
 * @n: length of the array
 */

void reverse_array(int *a, int n)
{
	int i, tmp;

	n--;
	for (i = 0; i < n / 2; i++)
	{
		tmp = a[i];
		a[i] = a[n - i];
		a[n - i] = tmp;
	}
}
