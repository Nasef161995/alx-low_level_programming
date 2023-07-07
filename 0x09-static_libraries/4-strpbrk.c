#include "main.h"
/**
 * _strpbrk - function that searches a string for any of a set of bytes
 *
 * @s: parameter is string
 *
 * @accept: parameter is character
 *
 * Return: pointer to the byte in s that matches one of the bytes in accept
 */

char *_strpbrk(char *s, char *accept)
{
int i;
while (*s != '\0')
{
for (i = 0; accept[i] != '\0'; i++)
{
if (*s == accept[i])
return (s);
}
s++;
}
return (NULL);
}
