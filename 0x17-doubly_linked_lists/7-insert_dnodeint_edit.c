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
    if (*h == NULL && idx > 0)
        return (NULL);
    if (*h == NULL && idx == 0)
    {
        *h = new;
        new->prev = NULL;
        return (new);
    }
    if (idx == 0)
    {
        return (add_dnodeint(h, n));
    }
    temp = *h;
    while (i < idx - 1)
    {
        temp = temp->next;
        i++;
        if (temp->next == NULL && idx - 1 > i)
            return (NULL);
    }
    if (temp->next == NULL)
        return (add_dnodeint_end(h, n));
    if (temp->next != NULL)
    {
        temp->next->prev = new;
        new->next = temp->next;
        new->prev = temp;
        temp->next = new;
        return (new);
    }
    else
        return (NULL);
}
