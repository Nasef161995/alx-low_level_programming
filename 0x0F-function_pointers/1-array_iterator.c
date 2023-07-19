#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_iterator - function that executes a function given as a parameter
 *
 * @array: parameter is integer
 *
 * @size: parameter is integer
 *
 * @action: pointer to function
 *
 * Return: function return void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int i;
for (i = 0; i < size ; i++)
action(array[i]);
}
