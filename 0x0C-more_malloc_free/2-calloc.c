#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/**
 * _calloc - function that allocates memory for an array
 *
 * @nmemb: parameter is integer
 *
 * @size: parameter is integer
 *
 * Return: returns pointer to  allocated memory.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
unsigned int i;
void *ptr;
if (nmemb == 0 || size == 0)
return (NULL);
ptr = malloc(nmemb * size);
if (ptr == NULL)
return (NULL);
memset(ptr, 0, nmemb * size);
return (ptr);
free(ptr);
}
