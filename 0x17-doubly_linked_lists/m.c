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
