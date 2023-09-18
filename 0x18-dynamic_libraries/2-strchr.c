#include "main.h"
/**
 * _strchr - function that locates a character in a string
 *
 * @s: parameter is string
 *
 * @c: parameter is character
 *
 * Return: pointer of character c in string
 */

char *_strchr(char *s, char c)
{
int i = 0;
while (s[i] >= '\0')
{
if (s[i] == c)
{
return (s + i);
}
i++;
}
return ('\0');
}
