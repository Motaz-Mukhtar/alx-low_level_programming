#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_list - frees a list_t list
 * @head: list_t type
 * Return: 0.
 */
void free_list(list_t *head)
{
	list_t *tmp = head;

	while (tmp != NULL)
	{
		list_t *n1 = tmp;

		tmp = tmp->next;
		free(n1);
	}
}
