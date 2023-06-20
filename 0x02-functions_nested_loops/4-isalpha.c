#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int _isalpha(int c)
{
if (c >= 'A' && c <= 'Z') {
return 1;
} else {
return 0;
}
}
