#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <string.h>


/**
 * print_strings - function that prints strings
 *
 * @n: number of strings passed to the function
 *
 * @separator: string to be printed between numbers
 *
 * Return: returns void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
va_list args;
va_start(args, n);
for (unsigned int i = 0; i < n ; i++)
{
char *str = va_arg(args, char*);
if (str == NULL)
printf("nil");
else
printf("%s", str);
if (i < n - 1 && separator != NULL)
printf("%s", separator);
}
va_end(args);
printf("\n");
}
