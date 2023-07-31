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
if (head)
{
free_listint(head->next);
if (head->str)
free(head->str);
free(head);
}
}
