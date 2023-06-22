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
int a[] = {0, 1, 3, 5, 6, 7, 8, 9};
for (i = 0; i < 8; i++)
{
_putchar(a[i] + '0');
}
_putchar('\n');
}
