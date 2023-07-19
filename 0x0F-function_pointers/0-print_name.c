#include "function_pointers.h"

/**
 * print_name - function that prints a name
 *
 * @name: parameter is character
 *
 * @f: pointer to function
 *
 * Return: function return void
 */

void print_name(char *name, void (*f)(char *))
{
f(name);
}
