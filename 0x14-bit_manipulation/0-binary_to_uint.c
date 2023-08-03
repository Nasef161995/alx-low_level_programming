#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - convert a binary number to decimal
 *
 * @b: pointer to character of string
 *
 * Return: returns converted decimal number
 */

unsigned int binary_to_uint(const char *b)
{
int i;
unsigned int num;
num = 0;
if (b == NULL)
return (0);
for (i = 0; b[i] != '\0'; i++)
{
if (b[i] != '0' && b[i] != '1')
return (0);
}
for (i = 0; b[i] != '\0'; i++)
{
num = num * 2 + (b[i] - '0');
}
return (num);
}

