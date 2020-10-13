#include <stdlib.h>
#include "holberton.h"

/**
 * _realloc - reallocates mem for a ptr
 * @ptr: pointer
 * @old_size: old size
 * @new_size: new size
 * Return: pointer or null
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
		return (ptr);
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
	free(trash);
	return (ptr1);
}
