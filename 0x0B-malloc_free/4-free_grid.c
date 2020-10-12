#include <stdlib.h>
#include "holberton.h"

/**
* free_grid - free a 2d array 
* @grid: 2d array from main
* @height: height of the array
* Return: void
*/

void free_grid(int **grid, int height)
{
	int i;
	
	for (i = 0; i <= height; i++)
	{	
		free(grid[i]);
	}	
	free(grid);;
}

