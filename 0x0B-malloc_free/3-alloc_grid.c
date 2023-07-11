#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * alloc_grid - function that returns a pointer to a 2 dimensional array
 *
 * @width: parameter is integer
 *
 * @height: parameter is integer
 *
 * Return: pointer to a 2 dimentional array
 */
int **alloc_grid(int width, int height)
{
if (width <= 0 || height <= 0)
return (NULL);
int **grid = (int **) malloc(height * sizeof(int *));
if (grid == NULL)
return (NULL);
unsigned int i, j;
for (int i = 0; i < height; i++)
{
grid[i] = (int *) calloc(width, sizeof(int));
if (grid[i] == NULL)
{
for (int j = 0; j < i; j++)
{
free(grid[j]);
}
free(grid);
return (NULL);
}
}
	return (grid);
}
