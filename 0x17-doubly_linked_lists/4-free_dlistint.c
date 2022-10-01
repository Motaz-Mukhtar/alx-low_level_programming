#include "lists.h"
#include <stdlib.h>
/**
 * void free_dlistint - frees a dlistint_t list
 * @head: dlistint_t type
 * Return: Void Vlue
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head)
	{
		temp = head;
		free(head);
		head = head->next;
	}
}
