#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - frees the previous grid
 *
 * @grid: the double pointer parameter
 * @height: the second formal parameter
 *
 * Return: Void
*/

void free_grid(int **grid, int height)
{
	int j;

	for (j = 0; j < height; j++)
		free(grid[j]);
	free(grid);
}
