#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * get_nodeint_at_index - function that returns the nth node
 *
 * @head: pointer to node
 *
 * @index: index of node argument
 *
 * Return: returns n of the node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
listint_t *ptr;
unsigned int i = 0;
ptr = head;
while (ptr != NULL && i < index)
{
ptr = ptr->next;
i++;
}
if (i == index)
return (ptr);
return (NULL);
}
