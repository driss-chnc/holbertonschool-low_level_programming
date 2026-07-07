#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - allocates a 2D array of integers
 * @width: width of the grid
 * @height: height of the grid
 * Return: pointer to the allocated 2D array, or NULL on failure
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int i;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(height * sizeof(char *));
	if (grid == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(char));
		if (grid[i] == NULL)
		{
			while (i-- > 0)
				free(grid[i]);
			free(grid);
			return (NULL);
		}
	}

	return (grid);
}
