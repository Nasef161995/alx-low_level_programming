#include "main.h"
/**
 *  _strncat - function that concatenates two strings
 *
 * @dest: parameter is character
 *
 * @src: parameter is character
 *
 *@n: parameter is string
 *
 * Return: returns (dest).
 */

char *_strncat(char *dest, char *src, int n)
{
int a = 0;
int b = 0;
while (dest[a] != '\0')
a++;
while (src[b] != '\0' && b < n)
{
dest[a] = src[b];
b++;
a++;
}
return (dest);
}
