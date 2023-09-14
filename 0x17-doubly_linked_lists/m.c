void free_dlistint(dlistint_t *head)
{
    dlistint_t *temp, *current;
    if (head)
    {
        temp = head;
        while (temp)
        {
            current = temp;
            temp = temp->next;
            free(current);
        }
    }
}

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
    dlistint_t *new, *temp;
    unsigned int i = 0, total = 0;
    new = malloc(sizeof(dlistint_t));
    if (new == NULL)
        return (NULL);
    new->n = n;
    if (*h == NULL && idx > 0)
        return (NULL);
    else if (*h == NULL && idx == 0)
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
        return (add_dnodeint(h, n));
    if (idx == total + 1)
        return (add_dnodeint_end(h, n));
    if (idx <= total)
    {
        temp = *h;
        while (i < idx - 1)
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
