#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * free_grid - function returns a pointer to a 2D array
 * Return: a pointer or NULL depends on the case
 * @grid: width of array
 * @height: height of an array
 **/
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
	{
		return;
	}
	for (i = 0; i <= height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
