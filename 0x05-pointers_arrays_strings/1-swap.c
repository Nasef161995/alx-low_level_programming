#include "main.h"
/**
 * swap_int - function that swaps the values of two integers
 *
 * @a: parameter is an integer
 *
 * @b: parameter is an integer
 *
 * Return: returns (0).
 */

void swap_int(int *a, int *b)
{
int temp = *a;
*a = *b;
*b = temp;
}
