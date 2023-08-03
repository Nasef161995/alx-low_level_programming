#include "main.h"
#include <stdio.h>

/**
 * get_bit - function return the value of a bit at index
 *
 * @n: decimal number to convert to binary
 *
 * @index: index starting from 0
 *
 * Return: returns value of bit at index
 */

int get_bit(unsigned long int n, unsigned int index)
{
unsigned long int temp;
if (index > 64)
return (-1);
temp = n >> index;
return (temp & 1);
}
