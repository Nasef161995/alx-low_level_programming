#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * find_listint_loop - function finds the loop in a list
 *
 * @head: pointer to the starting of the list
 *
 * Return: address of the node
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *ptr, *temp;

	ptr = temp = head;
	while (ptr && temp && temp->next)
	{
		ptr = ptr->next;
		temp = temp->next->next;
		if (ptr == temp)
		{
			ptr = head;
			break;
		}
	}
	if (!ptr || !temp || !temp->next)
		return (NULL);
	while (ptr != temp)
	{
		ptr = ptr->next;
		temp = temp->next;
	}
	return (temp);
}
