#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * insert_nodeint_at_index -  function inserts a new node at given index
 *
 * @head: pointer to node
 *
 * @idx: index of new node
 *
 * @n: integer argument
 *
 * Return: returns pointer
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *ptr, *temp;
unsigned int i = 0;
if (idx == 0)
{
ptr = malloc(sizeof(listint_t));
if (ptr == NULL)
return (NULL);
ptr->n = n;
ptr->next = *head;
*head = ptr;
return (ptr);
}
temp = *head;
while (temp != NULL && i < idx - 1)
{
temp = temp->next;
i++;
}
if (temp == NULL)
return (NULL);
ptr = malloc(sizeof(listint_t));
if (ptr == NULL)
return (NULL);
ptr->n = n;
ptr->next = temp->next;
temp->next = ptr;
return (ptr);
}
