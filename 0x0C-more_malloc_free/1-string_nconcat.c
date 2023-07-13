#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/**
 * string_nconcat - function that concatenates two strings
 *
 * @n: parameter is integer
 *
 * @s1: parameter is string
 *
 * @s2: parameter is string
 *
 * Return: returns pointer to a newly allocated space in memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int len1, len2, len3, size, i, j;
char *nstr;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
len1 = 0;
while (s1[len1] != '\0')
len1++;
len2 = 0;
while (s2[len2] != '\0')
len2++;
if (n >= len2)
len3 = len2;
else
len3 = n;
size = len1 + len3;
nstr = malloc((sizeof(char) * size) +1);
if (nstr == NULL)
return (NULL);
i = 0;
while (i < len1)
{
nstr[i] = s1[i];
i++;
}
j = 0;
while (j < len3)
{
nstr[i] = s2[j];
i++;
j++;
}
nstr[i] = '\0';
return (nstr);
free(nstr);
}
