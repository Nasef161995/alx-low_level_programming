#include "lists.h"
/**
 * delete_dnodeint_at_index - function delete node
 * @head: pointer to double list
 * @index: index of new node
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *temp;
unsigned int i = 0;

if (*head != NULL)
{

temp = *head;
while (i < index)
{
temp = temp->next;
i++;
if (temp == NULL)
return (-1);
}
if (index == 0)
{
if ((*head)->next)
{
*head = (*head)->next;
(*head)->prev = NULL;
}
else
{
*head = (*head)->next;
}
}
else if (temp->next == NULL)
{
temp->prev->next = NULL;
}
else
{
temp->prev->next = temp->next;
temp->next->prev = temp->prev;
}
free(temp);
return (1);
}
else
return (-1);
}
