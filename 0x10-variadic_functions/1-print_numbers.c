#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - function that  prints numbers
 *
 * @n: number of integers passed to the function
 *
 * @separator: string to be printed between numbers
 *
 * Return: returns void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list num;
unsigned int i;
va_start(num, n);
for (i = 0; i < n ; i++)
{
printf("%d", va_arg(num, unsigned int));
if (i < n - 1 && separator != NULL)
printf("%s", separator);
}
va_end(num);
printf("\n");
}
