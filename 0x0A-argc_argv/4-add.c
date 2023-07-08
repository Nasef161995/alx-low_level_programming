#include <stdio.h>
#include <stdlib.h>
/**
 * main - adds positive numbers
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
int add = 0;
for (i = 1; i < argc; i++)
{
add = add + atoi(argv[i]);
}
printf("%d\n", add);
}
else if (argc == 0)
{
printf("0\n");
}
else
{
printf("Error\n");
return (1);
}
return (0);
}
