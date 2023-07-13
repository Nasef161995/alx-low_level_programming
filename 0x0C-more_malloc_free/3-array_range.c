#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/**
 * array_range - function that creates an array of integers
 *
 * @min: parameter is integer
 *
 * @max: parameter is string
 *
 * Return: returns pointer to the newly created array
 */

int *array_range(int min, int max)
{
unsigned int i;
int *ptr;

if (min > max)
return (NULL);

ptr = malloc(sizeof(int) * (max - min + 1));
if (ptr == NULL)
return (NULL);

for (i = 0; i <= (max - min); i++)
ptr[i] = min + i;

return (ptr);

}
