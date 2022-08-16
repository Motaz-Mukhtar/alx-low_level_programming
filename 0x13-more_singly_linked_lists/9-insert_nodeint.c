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
	listint_t *new = malloc(sizeof(listint_t));
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
		*head = new;
	else
	{
		listint_t *tmp = *head;
		while (tmp->next != NULL)
		{
			if (i == idx - 1)
			{
				new->next = tmp->next;
				tmp->next = new;
			}
			tmp = tmp->next;
			i++;
		}
	}
	return (*head);
}
