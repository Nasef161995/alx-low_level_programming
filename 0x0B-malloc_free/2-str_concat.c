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
int len1 = 0;
while (s1[len1] != '\0')
	len1++;
int len2 = 0;
while (s2[len1] != '\0')
	len2++;
newstr = (char *)malloc(sizeof(char) * (len1 + len2 + 1));
if (newstr == NULL)
	return (NULL);

for (i = 0;  <= len1; i++)
{
newstr[i] = s1[i];
}
for (j = 0; j <= len2; j++)
{
newstr[i + j] = s2[j];
}
newstr(i + j) = '\0';
return (newstr);
free(newstr);
}
