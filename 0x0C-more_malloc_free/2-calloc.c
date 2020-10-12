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
	char *buf;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	buf =  malloc(nmemb * size);
	if (buf == NULL)
		return (NULL);
	for (i = 0; i < nmemb * size; i++)
		*(buf + i) =  0;
	return ((void *)buf);
}

