#include "main.h"
/**
 * _strncpy - function that that copies a string
 *
 * @dest: parameter is character
 *
 * @src: parameter is character
 *
 * @n: parameter is string
 *
 * Return: returns (dest).
 */

char *_strncpy(char *dest, char *src, int n)
{
int i;
for (i = 0; i < n &&  src[i] != '\0'; i++)
{
dest[i] = src[i];
}
for ( ; i < n; i++)
{
dest[i] = '\0';
}
return (dest);
}
