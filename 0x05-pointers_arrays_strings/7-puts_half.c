#include "main.h"
/**
 * puts_half - function that prints half of a string
 *
 * @str: parameter is a charecter
 *
 * Return: returns (0).
 */

void puts_half(char *str)
{
int len, i;
len = 0;
while (str[len] != '\0')
{
len++;
}
for (i = len / 2; i < len; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}
