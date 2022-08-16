#include "lists.h"
#include <stdio.h>
/**
 * sum_listint - returns the sum of all data(n) on linked list
 * @head: linked lsit type
 * Return: the sum of all data(n)
 */
int sum_listint(listint_t *head)
{
	int sum;
	listint_t *tmp;

	tmp = head;
	if (head == NULL)
		return (0);
	while (head)
	{
		tmp = tmp->next;
		sum += head->n;
		head = tmp;
	}
	return (sum);
}
