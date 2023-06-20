#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void) {
    int fib1 = 1, fib2 = 2, fib3, sum = 2;
    int digit, divisor;

    putchar('2');

    while (fib2 <= 4000000) {
        fib3 = fib1 + fib2;
        if (fib3 % 2 == 0) {
            sum += fib3;
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
        }
        fib1 = fib2;
        fib2 = fib3;
    }

    putchar('\n');

    return 0;
}
