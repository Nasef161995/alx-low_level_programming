#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - function that add node
 * @h: pointer to double list
 * @idx: index of new node
 * @n: data integer
 * Return: address of new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *new, *temp;
unsigned int i = 0;
new = malloc(sizeof(dlistint_t));
if (new == NULL)
return (NULL);
new->n = n;
if (*h == NULL)
{
*h = new;
new->prev = NULL;
return (new);
}
temp = *h;
if (idx == 0)
add_dnodeint(h, n);
if (temp != NULL)
{
while (i != idx - 1)
{
temp = temp->next;
i++;
}
new->prev = temp;
new->next = temp->next;
temp->next = new;
new->next->prev = new;
return (new);
}
else
return (NULL);
}
