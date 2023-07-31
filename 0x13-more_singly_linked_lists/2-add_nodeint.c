#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * add_nodeint - function adds a new node at the beginning
 *
 * @head: pointer to address of first node
 *
 * @n: integer argument
 *
 * Return: returns the pointer new node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *ptr;
ptr = malloc(sizeof(listint_t));
if (ptr == NULL)
return (NULL);
ptr->n = n;
ptr->next = *head;
*head = ptr;
return (ptr);
}
