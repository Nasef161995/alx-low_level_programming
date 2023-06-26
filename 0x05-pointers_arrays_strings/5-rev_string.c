#include "main.h"
/**
 * rev_string - function that reverses a string
 *
 * @s: parameter is a string
 *
 * Return: returns (0).
 */

void rev_string(char *s)
{
int c = 0;
while (s[c] != '\0')
{
c++;
}
char *star = s[0];
char *end = s[0] + c - 1;
while (star < end)
{
char temp = *star;
*star = *end;
*end = temp;
star++;
end--;
}
}
