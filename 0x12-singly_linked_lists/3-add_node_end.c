#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _strdup_ - Duplicates the string
 * @str: The string
 * Return: The Duplicated string
 */
char *_strdup_(const char *str)
{
	char *s;
	int len;

	len = strlen(str);
	s = malloc(sizeof(*s) * (len + 1));
	if (!s)
		return (NULL);
	while (len >= 0)
	{
		s[len] = str[len];
		--len;
	}
	return (s);
}
/**
 * add_node_end - adds a new node at the end of list
 * @head: the node.
 * @str: the string
 * Return: the new Node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));

	if (new == NULL)
		return (0);
	new->str = _strdup_(str);
	new->len = strlen(str);
	new->next = NULL;

	if (*head == NULL)
		*head = new;
	else
	{
		list_t *last_node = *head;
		while (last_node->next != NULL)
		{
			last_node = last_node->next;
		}
		last_node->next = new;
	}
	return (*head);
}
