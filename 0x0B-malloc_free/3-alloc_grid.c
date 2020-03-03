#include <stdlib.h>
#include "holberton.h"

void free_buffer(int **gr)
{
        int y;

	for (y = 0; gr[y]; y++)
                free(gr[y]);

	free(gr);
}

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * Each element of the grid should be initialized to 0.
 * @width: columns. x.
 * @height: rows. y.
 * Return: a pointer to a 2 dimensional array of integers.
 * The function should return NULL on failure.
 * If width or height is 0 or negative, return NULL.
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int y, x;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(height * sizeof(int *));

	if (grid == NULL)
		return (NULL);

	for (y = 0; y < height; y++)
	{
		grid[y] = malloc(width * sizeof(int));
		if (grid[y] == NULL)
		{
			free_buffer(grid);
			return (NULL);
		}
	}


	for (y = 0; y < height; y++)
	{
		for (x = 0; x < width; x++)
		{
			grid[y][x] = 0;
		}
	}
	return (grid);
}
