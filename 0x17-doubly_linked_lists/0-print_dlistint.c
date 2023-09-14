#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - prints all the elements of a doubly linked list
 * @h: pointer to list
 * Return: the number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
size_t num_nodes = 0;
while (h)
{
printf("%d\n", h->n);
h = h->next;
num_nodes++;
}
return (num_nodes);
}
