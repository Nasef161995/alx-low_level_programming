#include "main.h"
/**
 * rev_string - function that reverses a string
 *
 * @s: parameter is a string
 *
 * Return: returns (0).
 */

void rev_string(char *s)
{
int c = 0;
while (s[c] != '\0')
{
c++;
}
for (c -= 1; c >= 0; c--)
{
_putchar(s[c]);
}
_putchar('\n');
}
