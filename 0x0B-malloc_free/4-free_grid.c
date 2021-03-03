#include "holberton.h"

/**
 * free_grid - frees a two dimensional array
 * @grid: The two dimensional array
 * @height: The vertical length of the array
 *
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
}
