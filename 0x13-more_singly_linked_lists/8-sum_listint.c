#include "lists.h"
#include <stdlib.h>
/**
 * sum_listint - returns the sum of all data(n) on linked list
 * @head: linked lsit type
 * Return: the sum of all data(n)
 */
int sum_listint(listint_t *head)
{
	int sum;
	listint_t *tmp = malloc(sizeof(listint_t));

	tmp = head;
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
