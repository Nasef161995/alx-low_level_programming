#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * listint_len - function returns the number of nodes in a list
 *
 * @h: pointer to first node
 *
 * Return: returns the number of nodes
 */

size_t listint_len(const listint_t *h)
{
size_t count_node = 0;
while (h != NULL)
{
count_node++;
h = h->next;
}
return (count_node);
}
