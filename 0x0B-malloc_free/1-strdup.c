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
if (str == NULL)
return (NULL);
int len;
unsigned int i;
char *newstr;
len = 0;
while (str[len] != '\0')
{
len++;
}
newstr = malloc((len + 1) * sizeof(char));
for (i = 0; i <= len; i++)
{
newstr[i] = str[i];
}
return (newstr);
free(newstr);
}

