#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_dnodeint_end - function that adds a new node at end
 * @head: pointer to double list
 * @n: data interger
 * Return: the address of the new node
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *new, *temp;
int i = 0;
new = malloc(sizeof(dlistint_t));
if (new == NULL)
return (NULL);
new->n = n;
new->next = NULL;
if (*head == NULL)
{
*head = new;
new->prev = NULL;
}
else
{
temp = *head;
while (temp->next != 0)
{
temp = temp->next;
i++;
}
temp->next = new;
new->prev = temp;
}
return (new);
}
