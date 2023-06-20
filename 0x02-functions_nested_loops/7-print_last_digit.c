#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int print_last_digit(int n) {
    int last_digit;

    if (n < 0) {
        last_digit = (n % 10) * -1;
    } else {
        last_digit = n % 10;
    }

    _putchar(last_digit);

    return last_digit;
}
