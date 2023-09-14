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
dlistint_t *temp, *current;
if (head)
{
temp = head;
while (temp)
{
current = temp;
temp = temp->next;
free(current);
}
}
}
