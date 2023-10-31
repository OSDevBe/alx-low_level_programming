#include "main.h"
#include <stdlib.h>

/**
 * free_grid - free 2D grid
 *
 * @grid: arg int **
 *
 * @height: arg int h
 *
 * Retrun: VOID
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
