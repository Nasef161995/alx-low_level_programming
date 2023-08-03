#include "main.h"
#include <stdio.h>

/**
 * clear_bit - function sets the value of a bit to 0 at a given index
 * @n: pointer point to decimal number
 * @index: is the index, starting from 0
 * Return: returns 1 if it worked
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
unsigned long int p;
unsigned int temp;
if (index > 64)
return (-1);
temp = index;
for (p = 1; temp > 0; p *= 2, temp--)
;
if ((*n >> index) & 1)
*n -= p;
return (1);
}
