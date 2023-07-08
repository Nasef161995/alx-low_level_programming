#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two numbers
 *
 * @argc: number of command line arguments.
 *
 * @argv: array that contains the program command line arguments.
 *
 * Return: 0 - success.
 */

int main(int argc, char *argv[])
{
if (argc > 1)
{
int i;
int mult = 1;
for (i = 1; i < argc; i++)
{
mult = mult *atoi(argv[i]);
}
printf("%d\n", mult);
}
else if (argc > 3)
{
printf("Error\n");
return (1);
}
else
{
printf("Error\n");
return (1);
}
return (0);
}
