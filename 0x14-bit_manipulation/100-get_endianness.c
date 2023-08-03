#include "main.h"
#include <stdio.h>


/**
 * get_endianness - function checks endianness.
 * Return: return 0 if big endian
 */


int get_endianness(void)
{
int n;
n = 1;

if (*(char *)&n == 1)
return (1);

else
return (0);
}
