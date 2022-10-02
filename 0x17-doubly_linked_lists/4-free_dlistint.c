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

	if (head == NULL)
		return;
	while (head)
	{
		temp = head;
		free(temp);
		head = head->next;
	}
}
