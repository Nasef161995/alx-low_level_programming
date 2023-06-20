#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
void print_alphabet(void);
{
char c = ('a');
while (c <= 'z');
{
putchar (c);
c++;
}
putchar('\n');
}
int main(void)
{
print_alphabet(void);
return (0);
}
