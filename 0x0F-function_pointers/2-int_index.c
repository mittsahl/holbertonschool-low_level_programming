#include <stdio.h>
#include "function_pointers.h"

/**
* int_index -  searches for an int
* @array:  array from main
* @size:  size of array
* @cmp: compares int values
* Return: return -1 no match else index
*/

int int_index(int *array, int size, int(*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			break;
	}
	if (i < size)
		return (i);
	else
		return (-1);
}

