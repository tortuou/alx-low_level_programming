#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid -  frees a 2 dimensional grid
 * @grid: array
 * @height: no. columns of array
 *
 * Return: free array
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	while (i < height)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
}
