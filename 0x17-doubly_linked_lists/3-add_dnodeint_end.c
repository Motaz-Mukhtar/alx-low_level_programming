#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * add_dnodeint_end 0 adds a new node at the end
 * @head: dlistint_t type
 * @n: const int n
 * Return: a Doubly Linked list
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));

	new->n = n;
	new->next = NULL;
	new->prev = NULL;
	if (*head == NULL)
		*head = new;
	else
	{
		dlistint_t *last_node = *head;

		while (last_node->next != NULL)
			last_node = last_node->next;
		last_node->next = new;
		last_node->prev = *head;
	}
	return (*head);
}
