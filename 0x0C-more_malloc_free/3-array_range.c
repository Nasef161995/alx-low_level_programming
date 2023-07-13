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
int *arr;

if (min > max)
return (NULL);

arr = malloc(sizeof(int) * (max - min + 1));
if (arr == NULL)
return (NULL);

for (i = 0; min <= max; i++, min++)
*(arr + i) = min;

return (arr);
}
