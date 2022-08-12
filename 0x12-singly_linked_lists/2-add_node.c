#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _strdup- - Duplicate the string
 * @str: the string
 * Return: 0.
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
 * add_node - add new node at the beging of list
 * @head: list_t type
 * @str: const char type
 * Return: Always 0.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));

	if (head == NULL)
		return (0);
	if (new == NULL)
		return (0);
	new->str = _strdup_(str);
	new->len = strlen(str);
	new->next = *head;

	*head = new;
	return (*head);
}
