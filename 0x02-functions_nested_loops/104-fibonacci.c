#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void) {
    int i;
    unsigned int fib1 = 1, fib2 = 2, fib3;
    int digit, divisor;

    putchar(fib1 + '0');
    putchar(',');
    putchar(' ');
    putchar(fib2 + '0');

    for (i = 3; i <= 98; i++) {
        fib3 = fib1 + fib2;
        putchar(',');
        putchar(' ');
        divisor = 1;
        while (fib3 / divisor >= 10) {
            divisor *= 10;
        }
        while (divisor > 0) {
            digit = fib3 / divisor;
            putchar(digit + '0');
            fib3 %= divisor;
            divisor /= 10;
        }
        fib1 = fib2;
        fib2 = fib3;
    }

    putchar('\n');

    return 0;
}
