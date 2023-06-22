#include "main.h"
/**
 * print_most_numbers - is function is for print numbers
 *
 * parameter is an integer
 *
 * Return: returns 0
 */
void print_most_numbers(void)
{
int i;
for (i = 0; i <= 9; i++)
{
if (i == 2 || i = 4)
{
continue;
}
_putchar(i + '0');
}
_putchar('\n');
}
