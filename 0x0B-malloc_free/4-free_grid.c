#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * free_grid - function that frees a 2 dimensional grid
 *
 * @grid: 2 dimensional array of integers
 *
 * @height: parameter is integer
 *
 * Return: no return
 */
void free_grid(int **grid, int height)
{
	if (grid != NULL)
	{
	for (int i = 0; i < height; i++)
	{
	free(grid[i]);
	}
	free(grid);
	}
}
