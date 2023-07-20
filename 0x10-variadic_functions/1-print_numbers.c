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
va_list numbers;
va_start(numbers, n);
unsigned int i;
for (i = 0; i < n ; i++)
{
printf("%d", va_arg(numbers, int));
if (i < n - 1 && separator != NULL)
printf("%s", separator);
}
va_end(numbers);
printf("\n");
}
