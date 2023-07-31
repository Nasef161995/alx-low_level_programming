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
while (head != NULL)
{
ptr = ptr->next;
free(head);
head = ptr;
}
}
