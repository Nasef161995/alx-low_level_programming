#include "main.h"
/**
 * puts2 - function that reverses a string
 *
 * @str: parameter is a charecter
 *
 * Return: returns (0).
 */
void puts2(char *str)
{
int i = 0;
while (str[i] != 0)
{
_putchar(i);
i = i + 2;
}
_putchar('\n');
}
