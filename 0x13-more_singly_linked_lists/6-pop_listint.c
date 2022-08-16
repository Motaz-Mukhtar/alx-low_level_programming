#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
/**
 * pop_listint - deletes the head node of list
 * @head: the head node of linked list
 * Return: the head nod's data(n)
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp = malloc(sizeof(listint_t));
	int num;

	if (*head == NULL)
		return (0);
	tmp = *head;
	tmp = tmp->next;
	num = tmp->n;
	*head = tmp;

	return (num);
}
