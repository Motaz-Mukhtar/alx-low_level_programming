#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * sum_listint - returns the sum of all data(n) on linked list
 * @head: linked lsit type
 * Return: the sum of all data(n)
 */
int sum_listint(listint_t *head)
{
	listint_t *tmp = malloc(sizeof(listint_t));
	int sum;

	tmp = head;
	tmp->n = 0;
	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		tmp->n += head->n;
		head = head->next;
	}
	sum = tmp->n;
	return (sum);
}
