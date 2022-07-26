#include "main.h"
#include <stdlib.h>

/**
 * free_grid - free a 2d grid
 * @grid: multid array in
 * @height: height
 * Return: no
 */
void free_grid(int **grid, int height)
{
	if (grid != NULL && height != 0)
	{
		for (; height >= 0; height--)
			free(grid[height]);
		free(grid);
	}
}
