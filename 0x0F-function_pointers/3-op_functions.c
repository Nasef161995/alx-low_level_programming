#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - function that sum of a and b
 *
 * @a: parameter is integer
 *
 * @b: parameter is integer
 *
 * Return:  returns the sum of a and b
 */

int op_add(int a, int b)
{
return (a + b);
}



/**
 * op_sub - function that difference of a and b
 *
 * @a: parameter is integer
 *
 * @b: parameter is integer
 *
 * Return: returns the difference of a and b
 */

int op_sub(int a, int b)
{
return (a - b);
}


/**
 * op_mul - function that product of a and b
 *
 * @a: parameter is integer
 *
 * @b: parameter is integer
 *
 * Return:  returns the product of a and b
 */

int op_mul(int a, int b)
{
return (a * b);
}


/**
 * op_div - function that division of a by b
 *
 * @a: parameter is integer
 *
 * @b: parameter is integer
 *
 * Return: returns the result of the division of a by b
 */

int op_div(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(100);
}

return (a / b);
}

/**
 * op_mod - function that return remainder of the division
 *
 * @a: parameter is integer
 *
 * @b: parameter is integer
 *
 * Return: returns the remainder of the division of a by b
 */

int op_mod(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(100);
}
return (a % b);
}

