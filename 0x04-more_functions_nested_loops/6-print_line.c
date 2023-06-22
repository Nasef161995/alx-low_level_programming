#include "main.h"
/**
 * print_line - is function that draws a straight line in the terminal
 *
 *@n: parameter is an integer
 *
 * Return: returns 0
 */
void print_line(int n)
{
int n;
if (n <= 0)
{
_putchar('\n');
}
else
{
int i;
for (i = 0; i < n; i++)
{
_putchar('_');
}
_putchar('\n');
}
}
