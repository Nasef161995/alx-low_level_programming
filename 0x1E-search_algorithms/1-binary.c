#include "search_algos.h"
/**
 * binary_search - a function that searches for a value
 * @array: a pointer to the first element of the array
 * @size: the number of elements
 * @value: the value to search for
 * Return:  return the first index where value is located
 */
int binary_search(int *array, size_t size, int value)
{
	size_t left, right, i;

	left = 0;
	right = size - 1;

	if (array == NULL)
		return (-1);
	while (left <= right)
	{
		int mid = (left + right) / 2;

		if (array[mid] == value)
		{
			printf("Searching in array: ");
			for (i = left; i < right + 1; i++)
			{
				if (i == right)
					printf("%d\n", array[i]);
				else
					printf("%d , ", array[i]);
			}
			return (mid);
		}
		else
		{
			printf("Searching in array: ");
			for (i = left; i < right + 1; i++)
			{
				if (i == right)
					printf("%d\n", array[i]);
				else
					printf("%d , ", array[i]);
			}
			if (array[mid] < value)
				left = mid + 1;
			else
				right = mid - 1;
		}
	}
	return (-1);
}
