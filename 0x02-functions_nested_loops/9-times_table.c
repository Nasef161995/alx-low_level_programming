#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
void times_table(void) {
    int i, j, result;

    for (i = 0; i <= 9; i++) {
        for (j = 0; j <= 9; j++) {
            result = i * j;
            if (result < 10) {
                _putchar(result + '0');
            } else {
                _putchar((result / 10) + '0');
                _putchar((result % 10) + '0');
            }
            if (j < 9) {
                _putchar(',');
                _putchar(' ');
                if (i * (j+1) < 10) {
                    _putchar(' ');
                }
            }
        }
        _putchar('\n');
    }
}
