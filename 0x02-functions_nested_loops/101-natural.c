#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void) {
    int sum = 0;
    int i, digit;

    for (i = 3; i < 1024; i++) {
        if (i % 3 == 0 || i % 5 == 0) {
            sum += i;
        }
    }

    while (sum > 0) {
        digit = sum % 10;
        putchar(digit + '0');
        sum /= 10;
    }

    putchar('\n');

    return 0;
}
