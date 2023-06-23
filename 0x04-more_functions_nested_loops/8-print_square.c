#include "main.h"
/**
 * print_square - is function that prints a square followed by a new line
 *
 *@size: parameter is an integer
 *
 * Return: returns 0
 */
void print_square(int size)
{
if (size <= 0)
{
_putchar('\n');
}
else
{
int i;
int j;
for (i = 0; i < size; i++)
{
for (j = 0; j < size; j++)
{
_putchar('#');
}
_putchar('\n');
}
}
}
