#include "main.h"
/**
 * print_numbers - is function is for print numbers
 *
 * parameter is an integer
 *
 * Return: returns 0
 */
#include <stdio.h>

void print_numbers(void)
{
int i;
char digits[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', '\n'};
for (i = 0; i < sizeof(digits); i++)
{
_putchar(digits[i]);
}
}
