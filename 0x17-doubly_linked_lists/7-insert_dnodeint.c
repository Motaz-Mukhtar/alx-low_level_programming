#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: dlistint_t type
 * @idx: unsigned int type
 * @n: int type
 * Return: new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));
	dlistint_t *temp = *h;
	unsigned int i;

	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
		return (add_dnodeint(h, n));
	for (i = 0; i < (idx - 1); i++)
	{
		if (temp == NULL)
			return (NULL);
		if (temp->next == NULL)
			return (add_dnodeint_end(h, n));
		temp = temp->next;
	}
	new->next = temp->next;
	temp->next = new;
	new->prev = temp;
	temp->next->prev = new;

	return (new);
}
