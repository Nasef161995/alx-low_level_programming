#include "main.h"
/**
 * string_toupper - function that changes a string to uppercase
 *
 * @str: parameter is character
 *
 * Return: returns (str).
 */

char *string_toupper(char *str)
{
int i;
for (i = 0; str[i] != '\0'; i++)
{
if (str[i] >= 'a' && str[i] <= 'z')
{
str[i] = str[i] - 'a' + 'A';
}
}
return (str);
}
