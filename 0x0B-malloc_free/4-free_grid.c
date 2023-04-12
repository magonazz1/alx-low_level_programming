#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - frees a 2D grid previously created by alloc_grid
 *
 * @grid: pointer to be freed
 *
 * @height: height of the grid
 *
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int y;

	for (y = 0; y < height; y++)
	{
		free(grid[y]);
	}
	free(grid);
}
