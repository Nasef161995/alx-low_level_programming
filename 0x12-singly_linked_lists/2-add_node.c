#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * _strlen - function that returns the length of a string.
 * @s : s is a character
 * Return: returns length
 */

int _strlen(const char *s)
{
	int sl = 0;

	while (s[sl] != '\0')
	{
		sl++;
	}
	return (sl);
}

/**
 * add_node - function that adds a new node at the beginning
 * @head: pointer to first node
 * @str: string argument
 * Return: returns the address of the new element
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *addnew;

	addnew = malloc(sizeof(list_t));
	if (addnew == NULL)
		return (NULL);
	addnew->str = strdup(str);

	addnew->len = _strlen(str);
	addnew->next = *head;
	*head = addnew;

	return (addnew);
}
