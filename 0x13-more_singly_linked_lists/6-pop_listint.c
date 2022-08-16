#include "lists.h"
#include <stdlib.h>
/**
 * pop_listint - deletes the head node of list
 * @head: the head node of linked list
 * Return: the head nod's data(n)
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;
;
	if (*head == NULL)
		return (0);
	temp = *head;
	num = (*head)->n;
	*head = (*head)->next;

	free(temp);
	return (num);
}
