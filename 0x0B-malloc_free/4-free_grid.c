#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - Entry point calls free method to clear memory
 * @grid: 2dimensional memoy
 * @height: height num of grid
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int x;

	for (x = 0; x < height; x++)
	{
		free(grid[x]);
	}
	free(grid);
}
