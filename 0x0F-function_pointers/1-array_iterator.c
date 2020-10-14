#include <stdio.h>
#include "function_pointers.h"

/**
* array_iterator - executes function on each element of array
* @array:  array from main
* @size:  size of array
* @action: function pointer
* Return: void
*/

void array_iterator(int *array, size_t size, void(*action)(int))
{
	size_t i;

	if (action != NULL)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}

