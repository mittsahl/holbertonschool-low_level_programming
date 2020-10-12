#include <stdlib.h>
#include "holberton.h"

/**
* alloc_grid - allocates a 2d array in memory
* @width: width of the array
* @height:  height of the array
* Return: NULL if height or width <= 0 else the grid
*/

int **alloc_grid(int width, int height)
{
	int **twoDArray;
	int i, j;

	if (height <= 0 || width <= 0)
		return (0);
	twoDArray = (int **)malloc(sizeof(int *) * height);
	if (twoDArray == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		twoDArray[i] = (int *)malloc(sizeof(int) * width);
		if (twoDArray[i] == NULL)
		{	
			for (; i > 0; i--)
				free(twoDArray[i]);
			free(twoDArray);
			return (NULL);
		}
	}
				
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			twoDArray[i][j] = 0;
	}
	return (twoDArray);
}

