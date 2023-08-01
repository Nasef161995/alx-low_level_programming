#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * delete_nodeint_at_index -  function deletes the node at index
 *
 * @head: pointer to node
 *
 *@index: index of new node
 *
 * Return: returns 1 if it succeeded, -1 if it failed
 */


int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *ptr, *temp = *head;
unsigned int i = 0;
if (*head == NULL)
return (-1);
if (index == 0)
{
*head = (*head)->next;
free(temp);
return (1);
}
while (temp != NULL && i < index - 1)
{
temp = temp->next;
i++;
}
if (temp == NULL || temp->next == NULL)
return (-1);
ptr = temp->next;
temp->next = ptr->next;
free(ptr);
return (1);
}
