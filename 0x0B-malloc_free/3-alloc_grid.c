#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *alloc_grid - returns a pointer to a 2 dimensional array of integer
 *@width: the parameter
 *@height: the second parameter
 * Return: int**.
 */
int **alloc_grid(int width, int height)
{
	int i, j, k;
	int **grid;

	if (width <= 0 || height <= 0)
		return (NULL);
	grid = (int **) malloc((sizeof(int *)) * height);
	if (grid == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		grid[i] = (int *) malloc(sizeof(int) * width);
		if (grid[i] == NULL)
		{
			for (k = 0; k < i; k++)
				free(grid[k]);
			free(grid);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}
	return (grid);
}
