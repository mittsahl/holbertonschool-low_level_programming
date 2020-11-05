#include <stdio.h>
#include "holberton.h"

/**
* get_bit - returns the value of a bit at a given index
* @n: number to be checked
* @index: index of bit ot be checked
* Return: value of bit
*/

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);
	n >>= index;
	return (n & 1);
}

