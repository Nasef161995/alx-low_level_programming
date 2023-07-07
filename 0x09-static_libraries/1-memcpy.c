#include "main.h"
/**
 * _memcpy - function that copies memory area
 *
 * @dest: parameter is character
 *
 * @src: parameter is character
 *
 * @n: parameter is integer
 *
 * Return: returns (dest).
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
char *ptr = dest;
unsigned int i = 0;
while (i < n)
{
*ptr++ = *src++;
i++;
}
return (dest);
}
