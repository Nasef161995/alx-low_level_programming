#include "main.h"
/**
 * _puts_recursion - function that prints a string
 *
 * @s: parameter is character
 *
 * Return: returns (0).
 */

void _puts_recursion(char *s)
{
if (*s == '\0')
return;
_putchar(*s);
return (_puts_recursion(s + 1));
}
