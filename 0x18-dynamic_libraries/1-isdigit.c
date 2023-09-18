#include "main.h"
/**
 * _isdigit - checks for a digit
 *
 * @c: parameter is a character
 *
 * Return: returns 0 or return 1
 */

int _isdigit(int c)
{
if (c >= '0' && c <= '9')
{
return (1);
}
else
{
return (0);
}
}
