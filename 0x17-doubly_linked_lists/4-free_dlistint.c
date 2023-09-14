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
dlistint_t *temp;
if (head)
{
temp = head;
while (temp)
{
free(temp->prev);
temp = temp->next;
}
free(temp);
}
}
