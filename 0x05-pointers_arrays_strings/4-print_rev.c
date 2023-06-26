#include "main.h"
/**
 * print_rev - function that prints a string in reverse
 *
 * @s: parameter is a string
 *
 * Return: returns (0).
 */

void print_rev(char *s)
{
int i, len;
while (s[i] != '\0')
{
i++;
}
len = i;
for (int j = len - 1; j >= 0; j--)
{
_putchar(s[j]);
}
_putchar('\n');
}
