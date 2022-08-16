#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * get_nodeint_at_index - returns the nth node of listint_t
 * @head: linked list type
 * @index: unsigned int type
 * Return: nth node
 */
listint_t *get_nodeint_at_indx(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	int key = 1;

	while (head && key == 1)
	{
		if (i == index)
			key = 0;
		else
			head = head->next;
		i++;
	}
	return (head);
}
