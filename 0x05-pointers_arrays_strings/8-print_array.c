#include "main.h"
/**
 * print_array - function that prints n elements of an array of integers
 *
 * @a: parameter is a integer
 *
 * @n: parameter is a integer
 *
 * Return: returns (0).
 */

void print_array(int *a, int n)
{
int j;
for (j = 0; j < n; j++)
{
printf("%d", a[j]);
if (j != (n - 1))
{
printf(", ");
}
}
printf("\n");
}
