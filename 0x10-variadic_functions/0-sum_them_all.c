#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
/**
 * sum_them_all - function that returns the sum of all its parameters
 *
 * @n: parameter is integer
 *
 * Return: returns the sum of all its parameters
 */


int sum_them_all(const unsigned int n, ...)
{
if (n == 0)
{
return (0);
}
va_list args;
va_start(args, n);
int sum = 0;
for (unsigned int i = 0; i < n; i++)
{
sum += va_arg(args, int);
}
va_end(args);
return (sum);
}
