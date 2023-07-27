#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * print_list -  function that prints all the elements of a list_t list
 *
 * @h: pointer to address of first node
 *
 * Return: returns the number of nodes
 */
size_t print_list(const list_t *h)
{
size_t i = 0;
while (h)
{
if (h->str == NULL)
printf("[0] (nil)\n");
else
{
printf("[%d] %s\n", h->len, h->str);
}
i++;
h = h->next;
}
return (i);
}
