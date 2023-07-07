#include "main.h"
/**
 * _isupper - checks for uppercase character
 *
 * @c: parameter is a character
 *
 * Return: returns 0 or return 1
 */

int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
{
return (1);
}
else
{
return (0);
}
}
