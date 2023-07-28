#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * _strlen - finds the length of a string
 * @str: string to find the length of
 * Return: string length
 */
unsigned int _strlen(char *str)
{
unsigned int i;

for (i = 0; str[i]; i++)
;
return (i);
}
/**
 * add_node_end - function adds a new node at the end
 * @head: pointer to first node
 * @str: string argument
 * Return: returns the address
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newnode, *tmp;

	if (str == NULL)
		return (NULL);
	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
		return (NULL);
	newnode->str = strdup(str);
	if (newnode->str == NULL)
	{
		free(newnode);
		return (NULL);
	}
	newnode->len = _strlen(newnode->str);
	newnode->next = NULL;
	if (*head == NULL)
	{
		*head = newnode;
		return (newnode);
	}
	tmp = *head;
	while (tmp->next != 0)
		tmp = tmp->next;
	tmp->next = newnode;
	return (newnode);
}
