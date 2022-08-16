#include "lists.h"
#include <stdlib.h>
/**
 * insert_nodeint_at_index - add node at an given position
 * @head: linked list type
 * @idx: given position
 * @n: The new data(n) list
 * Return: the address of the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new = malloc(sizeof(listint_t)), *temp = *head;
	unsigned int i;

	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
		*head = new;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
	}
	else
	{
		for (i = 0; i < (idx - 1); i++)
		{
			if (temp == NULL || temp->next == NULL)
				return (NULL);
			temp = temp->next;
		}
		new->next = temp->next;
		temp->next = new;
	}
	return (*head);
}
