#include "main.h"
#include <stdio.h>

/**
 * set_bit - function sets value of a bit to 1 at index
 *
 * @n: ponter to decimal number
 *
 * @index: is the index, starting from 0
 *
 * Return: returns 1 if it worked, -1 if error
 */

int set_bit(unsigned long int *n, unsigned int index)
{
unsigned long int x;
if (index > 64)
return (-1);
for (x = 1; index > 0; index--, x = x * 2)
;
*n = *n + x;
return (1);
}

