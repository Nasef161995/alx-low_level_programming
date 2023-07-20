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
 * @...: A variable number of strings
 *
 * Return: returns void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
va_list strings;
char *str;
unsigned int i;
va_start(strings, n);
for (i = 0; i < n ; i++)
{
str = va_arg(strings, char*);
if (str == NULL)
printf("nil");
else
printf("%s", str);

if (i != n - 1 && separator != NULL)
{
printf("%s", separator);
}

}
printf("\n");
va_end(strings);
}
