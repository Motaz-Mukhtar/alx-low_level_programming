#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_listint2 - frees listint_t list
 * @head: linked list type
 * Return: 0.
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;
	int *p;

	p = malloc(sizeof(*head));
	if (p == NULL)
		head = NULL;
	tmp = *head;
	while (*head != NULL)
	{
		tmp = tmp->next;
		free(*head);
		*head = tmp;
	}
	head = NULL;
}
