#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * **alloc_grid - function that returns a pointer to a 2D intger array
 *
 * @width: width of the grid
 *
 * @height: height of the grid
 *
 * Return: grid
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int x;
	int y;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	grid = (int **) malloc(height * sizeof(int *));

	if (grid == NULL)
	{
		return (NULL);
	}
	for (y = 0; y < height; y++)
	{
		grid[y] = (int *) malloc(width * sizeof(int));

		if (grid[y] == NULL)
		{
			for (x = 0; x < y; x++)
			{
				free(grid[x]);
			}
			free(grid);
			return (NULL);
		}
		for (x = 0; x < width; x++)
		{
			grid[y][x] = 0;
		}
	}
	return (grid);
}
