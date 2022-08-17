#include "lists.h"
#include <stdlib.h>
/**
 * delete_nodeint_at_index - delete node at the given index
 * @head: linked list type
 * @index: unsigned int type
 * Return: if the delete success 1 else -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head;
	unsigned int i;

	if (temp == NULL)
		return (-1);
	if (index == 0)
	{
		*head = temp->next;
		free(temp);
		return (1);
	}
	for (i = 0; i < (index - 1); i++)
	{
		if (temp->next == NULL)
			return (-1);
		temp = temp->next;
	}
	temp->next = temp->next->next;
	free(temp);
	return (1);
}
