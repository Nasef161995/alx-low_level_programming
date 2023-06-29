#include "main.h"
/**
 * string_toupper - function that changes a string to uppercase
 *
 * @s: parameter is character
 *
 * Return: returns (s).
 */

char *string_toupper(char *)
{
char *s;
int i = 0;
for (i; s[i] != '\0'; i++)
{
if (s[i] >= 'a' && s[i] <= 'z')
s[i] = s[i] - 32;
}
return (s);
}
