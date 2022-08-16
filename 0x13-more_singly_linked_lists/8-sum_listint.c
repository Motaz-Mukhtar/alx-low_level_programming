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

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
