#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "holberton.h"
/**
 *_realloc - bla
 *@ptr: n;a
 *@old_size: bla
 *@new_size: bla
 *Return: bla
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int count = 0, i = 0;
	char *trash, *ptr1 = ptr;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		if (ptr == NULL)
		return (NULL);
	}
	if (new_size < old_size)
		old_size = new_size;
	trash = malloc(new_size);
	if (trash == NULL)
	{
		free(trash);
		return (NULL);
	}
	count = (new_size - old_size) + 1;
	for (i = 0; i < count; i++)
		trash[i] = ptr1[i];
	free(ptr);
	ptr1 = malloc(new_size);
	if (ptr1 == NULL)
	{
		free(ptr1);
		free(trash);
		return (NULL);
	}
	for (i = 0; i < new_size; i++)
		ptr1[i] = trash[i];
	return (ptr1);
}


