#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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
unsigned int len1 = strlen(s1);
unsigned int len2 = strlen(s2);
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
newstr = (char *)malloc(sizeof(char) * (len1 + len2 + 1));
if (newstr == NULL)
return (NULL);
strcat(newstr, s1);
strcat(newstr, s2);
return (newstr);
free(newstr);
}
