#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - Frees the 2D grid previously created
 * @grid: The 2D array to be freed
 * @height: input height (size)
 * Return: grid
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid != NULL || height != 0)
	{
		for (i = 0; i < height; i++)
		{
			free(grid[i]);
		}
		free(grid);
	}
}
