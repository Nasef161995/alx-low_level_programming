#include "main.h"
/**
 * create_array - function that creates an array of chars
 *
 * @size: parameter is integer
 *
 * @c: parameter is charecter
 *
 * Return: returns pointer to array.
 */

char *create_array(unsigned int size, char c)
{
char *p;
int i;
for (i = 0; i < size; i++)
{
p[i] = c;
}
if (size == 0)
return (Null);
else if (p == Null)
return (Null);
else
return (p);
}
