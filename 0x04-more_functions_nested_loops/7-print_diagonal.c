#include "main.h"
/**
 * print_diagonal - is function that draws a diagonal line in the terminal
 *
 *@n: parameter is an integer
 *
 * Return: returns 0
 */
void print_diagonal(int n)
{
if (n <= 0)
{
_putchar('\n');
}
else
{
int i;
int j;
for (i = 0; i < n; i++)
{
for (j = 0; j < i; j++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
}
}
