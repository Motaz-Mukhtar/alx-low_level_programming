#include "lists.h"
#include <stdlib.h>
/**
 * pop_listint - deletes the head node of list
 * @head: the head node of linked list
 * Return: the head nod's data(n)
 */
int pop_listint(listint_t **head)
{
	listint_t *temp = malloc(sizeof(listint_t));
	int num;

	if (temp == NULL)
		return (0);
	if (*head == NULL)
		return (0);
	temp = *head;
	num = temp->n;
	temp = (*head)->next;
	*head = temp;
	return (num);
}
