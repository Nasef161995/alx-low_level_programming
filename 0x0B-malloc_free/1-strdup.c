#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - function that returns a pointer to  allocated space in memory
 *
 * @str: parameter is charecter
 *
 * Return: returns pointer
 */

char *_strdup(char *str)
{
int len = 0;
char *newstr;
while (str[len] != '\0')
{
len++;
}
newstr = malloc(len + 1);
for (int i = 0; i <= len; i++)
{
newstr[i] = str[i];
}
if (str == NULL)
return (NULL);
return (newstr);
free(newstr);
}

