#include "main.h"
/**
*_islower - controls if a character is in lowercase
*@c: character to be verified
*Return: return 0 or 1
*/
int _islower(int c)
{
if (c >= 97 && c <= 122)
return (1);

return (0);
}
