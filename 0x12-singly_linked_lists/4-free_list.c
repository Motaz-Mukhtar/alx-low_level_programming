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
	while (head)
	{
		free(head->str);
		free(head->next);
		free(head);
		head = head->next;
	}
}
