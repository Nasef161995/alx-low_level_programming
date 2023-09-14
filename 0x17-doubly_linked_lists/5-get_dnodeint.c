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
unsigned int i = 0;
unsigned int num_nodes = 0;

temp = head;
while (temp->next != 0)
{
temp = temp->next;
num_nodes++;
}
if (head == NULL)
{
return (NULL);
}
else
{
if (index > num_nodes)
return (NULL);
else
{
temp = head;
while (i != index)
{
temp = temp->next;
i++;
}
return (temp);
}
}

}
