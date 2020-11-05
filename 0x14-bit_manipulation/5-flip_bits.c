#include <stdio.h>
#include "holberton.h"

/**
* flip_bits - counts number of bits to be flipped for numbers to =
* @n: num from main
* @m:  num from main
* Return: return number of digits to be flipped
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;

	while (n > 0 || m > 0)
	{
		if ((n & 1) != (m & 1))
			count++;
		m >>= 1;
		n >>= 1;
	}
	return (count);
}

