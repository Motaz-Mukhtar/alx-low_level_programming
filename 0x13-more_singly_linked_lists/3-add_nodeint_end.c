#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * add_nodeint_end - adds a new node at the end of list
 * @head: linked list type
 * @n: int type
 * Return: The address of the new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);
	if (head == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;

	if (*head == NULL)
		*head = new;
	else
	{
		listint_t *last_nodeint = *head;

		while (last_nodeint->next != NULL)
		{
			last_nodeint = last_nodeint->next;
		}
		last_nodeint->next = new;
	}
	return (*head);
}
