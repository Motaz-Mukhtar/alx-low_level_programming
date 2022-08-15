#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stddef.h>

/**
 * print_listint - prints all the elem of list
 * @h: node in list
 * Return: the number of noes
 */
size_t print_listint(const listint_t *h)
{
	int len = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		printf("%d\n", h->n);
		len ++;
		h = h->next;
	}
	return (len);
}
