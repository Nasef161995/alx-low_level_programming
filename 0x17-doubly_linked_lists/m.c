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
    if (*h == NULL)
    {
        *h = new;
        new->prev = NULL;
    }
    temp = *h;
    while (temp->next)
    {
        temp = temp->next;
        total++;
    }
    if (idx == 0)
        add_dnodeint(h, n);
    else if (idx == total)
        add_dnodeint_end(h, n);
    else if (idx > total)
        return (NULL);
    else
    {
        temp = *h;
        while (i != idx - 1)
        {
            temp = temp->next;
            i++;
        }
        new->prev = temp;
        new->next = temp->next;
        temp->next = new;
        new->next->prev = new;
    }
    return (new);
}
