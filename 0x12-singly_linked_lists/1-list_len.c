#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * list_len - function that returns the number of elements in a linked list.
 *
 * @h: pointer to address of first node
 *
 * Return: returns the number of nodes
 */

size_t list_len(const list_t *h)
{
size_t i = 0;
while (h)
{
i++;
h = h->next;
}
return (i);
}
