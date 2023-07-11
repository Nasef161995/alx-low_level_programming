#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - function that concatenates two strings
 *
 * @s1: parameter is string
 *
 * @s2: parameter is string
 *
 * Return: pointer to newly allocated space in memory
 */

char *str_concat(char *s1, char *s2)
{
char *newstr;
unsigned int i, j;
if (s1 == NULL)
	return (NULL);
if (s2 == NULL)
	return (NULL);
for (i = 0; s1[i] != '\0'; i++)
	;
for (j = 0; s2[j] != '\0'; j++)
	;
newstr = (char *)malloc(sizeof(char) * (i + 1 + j + 1));
if (newstr == NULL)
	return (NULL);
int x, y;
for (x = 0; x <= i; x++)
{
newstr[x] = s1[x];
}
for (y = 0; y <= j; y++)
{
newstr[i + y] = s2[y];
}
newstr(x + y) = '\0';
return (newstr);
free(newstr);
}
