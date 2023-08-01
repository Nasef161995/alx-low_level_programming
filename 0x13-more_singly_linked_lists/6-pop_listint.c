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
listint_t *ptr;
if (*head == NULL)
return (0);
n = (*head)->n;
ptr = (*head)->next;
free(*head);
*head = ptr;
return (n);
}
