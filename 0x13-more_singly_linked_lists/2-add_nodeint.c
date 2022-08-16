#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
/**
 * add_nodeint - adds a new node at the beginning of list
 * @head: node linked list type
 * @n: int type
 * Return: the address of a new elem
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));

	if (head == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;

	*head = new;
	return (*head);
}
