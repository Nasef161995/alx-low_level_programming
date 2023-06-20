#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int _putchar(char c);

void print_alphabet() {
    char c = 'a';
    while (c <= 'z') {
        _putchar(c);
        c++;
    }
    _putchar('\n');
}

int main() {
    print_alphabet();
    return 0;
}

int _putchar(char c) {
    return putchar(c);
}
