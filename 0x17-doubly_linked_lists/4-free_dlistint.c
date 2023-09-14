#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_dlistint - function that free list
 * @head: pointer to double list
 * Return: void
 */

void free_dlistint(dlistint_t *head)
{
if (head)
{
while (head->next != NULL)
{
head = head->next;
free(head->prev);
}
free(head);
}
}
