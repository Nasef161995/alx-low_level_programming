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
new->n = n;
if (new == NULL)
return (NULL);
if (*head == NULL)
{
*head = new;
new->next = new->prev = NULL;
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
