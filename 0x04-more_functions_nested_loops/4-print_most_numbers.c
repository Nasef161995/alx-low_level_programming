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
char numbers[] = "01356789";
for (i = 0; i < sizeof(numbers) / sizeof(numbers[0]); i++)
{
_putchar(numbers[i]);
}
_putchar('\n');
}
