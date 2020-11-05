#include <stdio.h>
#include "holberton.h"

/**
* clear_bit - sets a bit to 0
* @n: to have bit changed
* @index: index of bit to be changed
* Return: 1 is successful -1 on error
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n &= ~(1 << index);
	return (1);
}

