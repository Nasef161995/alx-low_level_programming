
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
unsigned int i = 0, total = 0;
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
while (temp->next)
{
temp = temp->next;
total++;
}
if (idx == 0)
add_dnodeint(h, n);
if (idx == total + 1)
add_dnodeint_end(h, n);
temp = *h;
if (temp)
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
return (new);
}
