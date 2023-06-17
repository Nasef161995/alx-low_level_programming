#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
    int i, j, k;
    i = 0;
    while (i < 10) {
        j = i + 1;
        while (j < 10) {
            k = j + 1;
            while (k < 10) {
                putchar(i + '0');
                putchar(j + '0');
                putchar(k + '0');
                if (i < 7) {
                    putchar(',');
                    putchar(' ');
                }
                k++;
            }
            j++;
        }
        i++;
    }
    putchar('\n');
    return 0;
}
