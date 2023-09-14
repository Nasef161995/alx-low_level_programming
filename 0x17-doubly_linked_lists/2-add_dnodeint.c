#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_dnodeint - function that adds a new node at the beginning
 * @head: pointer to double list
 * @n: data interger
 * Return: the address of the new node
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *new;
new = (dlistint_t *)malloc(sizeof(dlistint_t));
if (new == NULL)
return (NULL);
new->n = n;
if (*head == NULL)
{
*head = new;
new->prev = 0;
}
else
{
(*head)->prev = new;
new->next = *head;
new->prev = NULL;
*head = new;
}
return (new);
}
