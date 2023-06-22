#include "main.h"
/**
 * more_numbers - is function is for print numbers
 *
 * parameter is an integer
 *
 * Return: returns 0
 */
void more_numbers(void)
{
int i, j;
for (i = 0; i < 10; i++)
{
for (j = 0; j <= 14; j++)
{
if (j > 9)
{
_putchar('1');
}
_putchar((j % 10) + '0');
}
_putchar('\n');
}
}
