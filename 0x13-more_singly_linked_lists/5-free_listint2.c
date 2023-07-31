#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * free_listint2 - function frees a list.
 *
 * @head: pointer to node
 *
 * Return: returns void
 */

void free_listint2(listint_t **head)
{
listint_t *current;
while (*head != NULL)
{
current = *head;
*head = (*head)->next;
free(current);
}
*head = NULL;
}
