#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_grid - sets free a 2d array
 * @grid: the 2d grid itself
 * @height: the dimensional height of the grid
 * Description: frees the grid's memory
 * Return: nothing
 */

void free_grid(int **grid, int height)
{
	int g;

	for (g = 0; g < height; g++)
	{
		free(grid[g]);
	}
		free(grid);
}
