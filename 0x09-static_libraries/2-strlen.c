#include "main.h"
/**
 * _strlen - function that that returns the length of a string
 *
 * @s: parameter is a character
 *
 * Return: returns (length).
 */

int _strlen(char *s)
{
int len = 0;
while (*s != '\0')
{
len++;
s++;
}
return (len);
}
