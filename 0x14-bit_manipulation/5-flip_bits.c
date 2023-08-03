#include "main.h"
#include <stdio.h>

/**
 * flip_bits - function that returns the number of bits you would need to flip
 * @n: decimal number
 * @m: decimal number to convert to
 * Return: returns number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int temp;
int count;
temp = n ^ m;
count = 0;
while (temp)
{
count++;
temp &= (temp - 1);
}

return (count);

}
