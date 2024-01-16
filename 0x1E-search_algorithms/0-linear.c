#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * linear_search - ......
 * @array: .....
 * @size: .....
 * @value: .....
 * Return: .......
 */

int linear_search(int *array, size_t size, int value)
{
	for (size_t i = 0; i < size; i++)
	{
		if (array[i] == value)
		{
			return (i);
		}
		printf("Value checked array[%ld] = [%d] \n", i, array[i]);
	}
	return (-1);
}
