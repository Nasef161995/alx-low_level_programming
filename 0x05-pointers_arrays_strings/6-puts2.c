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
while (*str != '\0')
{
_putchar(*str);
str = str + 2;
}
_putchar('\n');
}
