#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * free_listint - function frees a list.
 *
 * @head: pointer to first node
 *
 * Return: returns void
 */

void free_listint(listint_t *head)
{
listint_t *ptr;
ptr = head;
while (ptr != NULL)
{
ptr = ptr->next;
free(ptr->next);
}
free(head);
}
