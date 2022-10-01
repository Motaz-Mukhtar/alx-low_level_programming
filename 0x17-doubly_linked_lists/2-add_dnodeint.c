#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * add_dnodeint - adds a new node at the beginning of doubly linked list
 * @head: The Head of the list
 * @n: Number
 * Return: The list
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (*head == NULL)
		return (NULL);
	new->prev = NULL;
	new->n = n;
	new->next = *head;

	*head = new;
	return (*head);
}
