#include "main.h"
/**
 * _strchr - function that locates a character in a string
 *
 * @s: parameter is character
 *
 * @c: parameter is character
 *
 * Return: returns (s).
 */

char *_strchr(char *s, char c)
{
int i = 0;
while (s[i] != '\0')
{
if (s[i] == c)
{
return (s + i);
}
i++;
}
return ('\0');
}
