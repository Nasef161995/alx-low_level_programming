#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - function that returns a pointer to  allocated space in memory
 *
 * @str: parameter is charecter
 *
 * Return: pointer to the copied string (Success), NULL
 */
char *_strdup(char *str)
{
	char *newstr;
	unsigned int i, j;

	if (str == NULL)
	return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		;

	newstr = (char *)malloc(sizeof(char) * (i + 1));

	if (newstr == NULL)
	return (NULL);

	for (j = 0; j <= i; j++)
	newstr[j] = str[j];

	return (newstr);
}
