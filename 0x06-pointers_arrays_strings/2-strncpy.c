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
int a = 0;
int b = 0;
while (a != n)
{
dest[b] = src[a];
b++;
a++;
if (src[a] == '\0')
{
break;
}
}
while (b != n)
{
dest[b++] = '\0';
}
return (dest);
}
