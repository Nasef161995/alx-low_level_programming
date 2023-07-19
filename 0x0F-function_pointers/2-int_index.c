#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * int_index - function that searches for an integer
 *
 * @array: parameter is integer
 *
 * @size: parameter is integer the number of elements
 *
 * @cmp: pointer to function
 *
 * Return:  returns the index of the first element
 */


int int_index(int *array, int size, int (*cmp)(int))
{

int i;

if (size > 0)
{
if (array && cmp)
{

for (i = 0; i < size ; i++)
{
if (cmp(array[i]) != 0)
return (i);
}
}
}
return (-1);
}
