#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>


/**
 * get_op_func - function that selects the correct function operator
 *
 * @s: the operator passed as argument to the program
 *
 * Return: returns pointer to the function
 */

int (*get_op_func(char *s))(int, int)
{
op_t ops[] = {
	{ "+", op_add },
	{ "-", op_sub },
	{ "*", op_mul },
	{ "/", op_div },
	{ "%", op_mod },
	{ NULL, NULL }
	};
int i = 0;


while (i < 5)
{
if (strcmp(s, ops[i].op) == NULL)
return (ops[i].f);
i++;
}

return (0);
}
