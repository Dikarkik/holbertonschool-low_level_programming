#include <stdlib.h>
#include "holberton.h"

/**
 * free_grid - frees a 2d grid previously created by your alloc_grid function.
 * @grid: 2d array.
 * @height: rows.
 * Return: void.
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
