#include "main.h"
/**
 * _strcmp - function that that compares two strings
 *
 * @s1: parameter is character
 *
 * @s2: parameter is character
 *
 * Return: returns (0).
 */

int _strcmp(char *s1, char *s2)
{
int a = 0;
while (s1[a] != '\0')
{
if (s1[a] < s2[a])
return (s1[a] - s2[a]);
if (s1[a] > s2[a])
return (s1[a] - s2[a]);
a++;
}
return (0);
}
