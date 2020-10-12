#include <stdlib.h>
#include "holberton.h"

/**
* _calloc -  allocates mem for nmmeb elements of bytes size
* @nmemb:  number of members of array
* @size: size of each element
* Return: Pointer to memory location else NULL
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *buf;

	if (nmemb == 0 || size == 0)
		return (NULL);
	buf =  malloc(nmemb * size);
	return (buf);
}

