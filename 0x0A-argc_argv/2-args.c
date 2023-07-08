#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints all arguments it receives
 *
 * @argc: number of command line arguments.
 *
 * @argv: array that contains the program command line arguments.
 *
 * Return: 0 - success.
 */

int main(int argc __attribute__((unused)), char *argv[])
{
int i;
for (i = 0; i < argc; i++)
printf("%s\n", argv[i]);
return (0);
}
