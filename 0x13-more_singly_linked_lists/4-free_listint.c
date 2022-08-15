#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * free_listint - fress a listint_t list
 * @head: linked list type
 * Return: 0.
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
