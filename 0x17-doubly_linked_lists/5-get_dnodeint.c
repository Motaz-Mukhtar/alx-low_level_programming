#include "lists.h"
#include <stdlib.h>
/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked lists
 * @head: dlistint_t type
 * @index: unsigned int type
 * Return: the nth of node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int length = 0;

	while (head)
	{
		if (length == index)
			return (head);
		head = head->next;
		length++;
	}
	return (NULL);
}
