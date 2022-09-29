#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_dlistint - prints all the ele of a dlistint_t list
 * @h: dlistint_t type
 * Return: Number of elements
 */
size_t print_dlistint(const dlistint_t *h)
{
	int length = 0;

	if (h == NULL)
		return (0);
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		length++;
	}
	return (length);
}
