#include <stdio.h>
#include "holberton.h"

/**
* set_bit - sets bit at a given index
* @n: number to be set
* @index: index of bit to be switched to 1
* Return: 1 if worked
*/

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int change = 1;

	if (index > 63)
		return (-1);

	change <<= index;
	*n |= change;
	return (1);
}

