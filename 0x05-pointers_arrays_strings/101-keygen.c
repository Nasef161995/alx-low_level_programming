#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 6

int main(void)
{
char password[PASSWORD_LENGTH + 1];
const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
const int charset_size = sizeof(charset) - 1;
int i;

srand(time(NULL));

for (i = 0; i < PASSWORD_LENGTH; i++
{
password[i] = charset[rand() % charset_size];
}
password[PASSWORD_LENGTH] = '\0';

printf("%s\n", password);

return (0);
}
