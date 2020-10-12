#include <stdlib.h>
#include "holberton.h"

/**
* malloc_checked - returns a void ptr to malloc'd memory
* @b: unsigned int that represents the number of bytes to allocate
* Return: pointer to allocated memory else exit 98
*/

void *malloc_checked(unsigned int b)
{
	void *buf = malloc(b);

	if (buf == NULL)
		exit(98);
	return (buf);
}

