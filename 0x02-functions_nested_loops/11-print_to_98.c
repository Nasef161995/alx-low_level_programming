#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
void print_to_98(int n) {
    int i;

    if (n <= 98) {
        for (i = n; i <= 98; i++) {
            int num = i;
            if (num < 0) {
                _putchar('-');
                num *= -1;
            }
            if (num >= 10) {
                print_to_98(num / 10);
                print_to_98(num % 10);
            } else {
                _putchar(num + '0');
            }
            if (i != 98) {
                _putchar(',');
                _putchar(' ');
            }
        }
    } else {
        for (i = n; i >= 98; i--) {
            int num = i;
            if (num < 0) {
                _putchar('-');
                num *= -1;
            }
            if (num >= 10) {
                print_to_98(num / 10);
                print_to_98(num % 10);
            } else {
                _putchar(num + '0');
            }
            if (i != 98) {
                _putchar(',');
                _putchar(' ');
            }
        }
    }

    _putchar('\n');
}
