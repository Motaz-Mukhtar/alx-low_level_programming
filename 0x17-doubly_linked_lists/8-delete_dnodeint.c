#include "lists.h"
#include <stdlib.h>
/**
 * delete_dnodeint_at_index - deletes the node at index of dlsitint
 * @head: dlistint_t type
 * @index: usngined int type
 * Return: 1 if it succeeded -1 if it falied
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int len;
	dlistint_t *node = *head, *node2;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(node);
		return (1);
	}
	for (len = 0; len < (index - 1); len++)
	{
		if (node->next == NULL)
			return (-1);
		node = node->next;
	}
	node2 = node->next;
	node->next = node2->next;
	node2->prev = node->prev;
	free(node2);
	return (1);
}
