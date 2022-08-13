#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * free_list - frees a list_t list
 * Return: 0.
 */
void free_list(list_t *head)
{
	list_t *tmp;
	while (head)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
