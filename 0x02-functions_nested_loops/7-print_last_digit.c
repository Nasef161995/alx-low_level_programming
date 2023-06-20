#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int print_last_digit(int n) {
    int last_digit = _abs(n % 10);
    _putchar(last_digit);
    return last_digit;
}
