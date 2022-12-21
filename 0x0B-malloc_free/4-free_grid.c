#include "main.h"
/**
 * free_grid - frees previously created memory
 * @grid:the 2d array
 * @height:of the grid
 * Return:noting
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
