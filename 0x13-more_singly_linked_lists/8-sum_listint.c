#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * sum_listint - function sum of all the data (n) of a list
 *
 * @head: pointer to node
 *
 * Return: returns sum
 */

int sum_listint(listint_t *head)
{
listint_t *ptr;
int sum = 0;
ptr = head;
if (head == NULL)
return (0);
while (ptr != 0)
{
sum = sum + ptr->n;
ptr = ptr->next;
}
return (sum);
}
