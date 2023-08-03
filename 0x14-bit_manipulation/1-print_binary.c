#include "main.h"
#include <stdio.h>

/**
 * print_binary - print binary number
 *
 * @n: decimal number
 *
 * Return: returns void
 */

void print_binary(unsigned long int n)
{
unsigned long int num;
int i;
if (n == 0)
{
printf("0");
return;
}
for (num = n, i = 0; (num >>= 1) > 0; i++)
;
for (; i >= 0; i--)
{
if ((n >> i) & 1)
printf("1");
else
printf("0");
}
}
