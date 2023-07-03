#include "main.h"
/**
 * _memset - function that fills memory with a constant byte
 *
 * @s: parameter is character
 *
 * @b: parameter is character
 *
 * @n: parameter is integer
 *
 * Return: returns (s).
 */

char *_memset(char *s, char b, unsigned int n)
{
unsigned int i = 0;
while (i < n)
{
s[i] = b;
i++;
}
return (s);
}
