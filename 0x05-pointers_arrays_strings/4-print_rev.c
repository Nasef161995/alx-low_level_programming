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
int i;
while (*s[i] != '\0')
{
i++
}
int len = i;
int j;
for (j = len - 1; j >= 0; j--)
{
_putchar(*s[j]);
}
_putchar('\n');
}
