#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - function that add node
 * @head: pointer to double list
 * @index: index of new node
 * Return: address of new node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
dlistint_t *temp;
unsigned int i = 0, num_node = 0;
if (head == NULL)
{
return (NULL);
}
temp = head;
while (temp->next != NULL)
{
temp = temp->next;
num_node++;
}

if (index <= num_node)
{
temp = head;
while (i != index)
{
temp = temp->next;
i++;
}
return (temp);
}
else
return (NULL);
}
