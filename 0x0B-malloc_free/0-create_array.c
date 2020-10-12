#include <stdlib.h>
#include "holberton.h"

/**
* create_array - creates an array and initializes it with certain chars
* @size: size of the array
* @c: teh char to be initialized to
* Return: pointer to the array (string) or NULL if malloc fails or size is 0
*/

char *create_array(unsigned int size, char c)
{
	char *array = malloc(size);
	unsigned int i;

	if (array == 0)
		return (0);
	if (size == 0)
		return (0);
	for (i = 0; i < size; i++)
		array[i] = c;
	return (array);
}

