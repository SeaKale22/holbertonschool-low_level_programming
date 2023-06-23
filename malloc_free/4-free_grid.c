#include "main.h"
#include <stdlib.h>
/**
 * free_grid- Frees a two-deminsional grid
 * @grid: Grid to be freed
 * @height: Height of grid to be freed
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
