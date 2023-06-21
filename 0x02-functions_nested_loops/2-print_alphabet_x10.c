#include "main.h"
/**
*print_alphabet_x10 - prints alphabet letters
* ten times
*desc: The function uses loop to operate
*Return: no return
*/
void print_alphabet_x10(void)
{
int counter = 0;
int d;
while (counter++ <= 9)
{
for (d = 'a'; d <= 'z'; d++)
_putchar(d);

_putchar(10);
}
}
