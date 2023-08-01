#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>


/**
 * pop_listint - function that deletes the head node
 *
 * @head: pointer to node
 *
 * Return: returns pointer
 */
int pop_listint(listint_t **head)
{
int n;
if (*head == NULL)
return (0);
n = (*head)->n;
listint_t *ptr;
ptr = *head;
*head = (*head)->next;
free(ptr);
return (n);
}
