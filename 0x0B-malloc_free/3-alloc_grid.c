#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid -  pointer to a 2 dimensional array of integers.
 * @width: no. columns in array
 * @height: no. rows in array
 *
 * Return: 2 dimensional array of integers.
 */
int **alloc_grid(int width, int height)
{
	int i, j, **grid;

	if (width <= 0 || height <= 0)
		return (NULL);
	grid = malloc(sizeof(*grid) * height);
	if (grid == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(sizeof(**grid) * width);
		if (grid[i] == NULL)
		{
			while (i--)
				free(grid[i]);
			free(grid);
			return (NULL);
		}
		else
		{
			for (j = 0; j < width; j++)
			{
				grid[i][j] = 0;
			}
		}
	}
	return (grid);
}
