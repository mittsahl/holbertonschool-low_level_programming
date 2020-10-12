#include <stdlib.h>
#include "holberton.h"

/**
* array_range - creates an array of integers
* @min: int value
* @min: int value
* Return: pointer to the array else null
*/

int *array_range(int min, int max)
{
	int i;
	int *array;

	if (min > max)
		return (NULL);
	if (max - min < 2)
		i = 2;
	else
		i = max - min + 1;

	array = malloc(i * 4);
	if (array == NULL)
		return (NULL);

	for (i = 0; i + min <= max; i++)
		array[i] = i + min;
	if (min == max)
		array[i] = max;
	return (array);
}

