#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * reverse_listint - the function that reverses a list
 *
 * @head: pointer to node
 *
 * Return: returns a pointer to the first node
 */
listint_t *reverse_listint(listint_t **head)
{
listint_t *temp, *p;
if (head == NULL || *head == NULL)
return (NULL);
if ((*head)->next == NULL)
return (*head);
temp = NULL;
while (*head != NULL)
{
p = (*head)->next;
(*head)->next = temp;
temp = *head;
*head = p;
}
*head = temp;
return (*head);
}
