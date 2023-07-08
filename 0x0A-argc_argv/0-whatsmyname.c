#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints its name, followed by a new line.
 *
 * @argc: number of command line arguments.
 *
 * @argv: array that contains the program command line arguments.
 *
 * Return: 0 - success.
 */
int main(int argc, char *argv[])
{
char *arg = argv[0];
while (*arg != '\0')
{
_putchar(*arg);
arg++;
}
_putchar('\0');
return (0);
}
