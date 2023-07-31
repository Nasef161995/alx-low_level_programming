#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * add_nodeint_end - function adds a new node at the end
 *
 * @head: pointer to first node
 *
 * @n: integer argument
 *
 * Return: returns pointer
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *ptr, *current;
ptr = malloc(sizeof(listint_t));
if (ptr == NULL)
return (NULL);
ptr->n = n;
ptr->next = NULL;
current = *head;
while (current != NULL)
{
current = current->next;
}
current->next = ptr;
return (ptr);
}
