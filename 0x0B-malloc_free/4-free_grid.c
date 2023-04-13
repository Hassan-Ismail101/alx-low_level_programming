#include "main.h"
#include <stdlib.h>
/**
 * free_grid - create 2D array
 * @grid: the arary
 * @height: 2D size
 */
void free_grid(int **grid, int height)
{
	int itr1D;

	if (height >= 0 && grid != NULL)
	{
		itr1D = 0;
		for (itr1D = 0; itr1D < height; itr1D++)
			free(*(grid + itr1D));
		free(grid);
	}
}
