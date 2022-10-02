#include "lists.h"
#include <stdlib.h>
/**
 * sum_dlistint - returns the sum of all the data (n) of dlistint_t linked list
 * @head: dlistint_t type
 * Return: The sum of data (n)
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head)
	{
		sum += head->n;
		head = head->next;

	}
	return (sum);
}
