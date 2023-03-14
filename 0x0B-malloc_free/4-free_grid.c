#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees memory for grid
 *
 * @grid: matrix to free
 * @height: rows of matrix
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height == 0)
		return;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
