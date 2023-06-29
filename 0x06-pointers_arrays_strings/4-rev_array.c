#include "main.h"
/**
 * reverse_array - function that reverses the content of an array of integers
 *
 * @a: parameter is integer
 *
 * @n: parameter is integer
 *
 * Return: returns (0).
 */

void reverse_array(int *a, int n)
{
int i, j;
for (i = 0; j = n - 1; i < j; i++; j--)
{
int temp = a[i];
a[i] = a[j];
a[j] = temp;
}
}
