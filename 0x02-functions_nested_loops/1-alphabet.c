#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */

void alphabet() {
char c = 'a';
while (c <= 'z') {
putchar(c);
c++;
}
    putchar('\n');
}

int main() {
    alphabet();
    return 0;
}

