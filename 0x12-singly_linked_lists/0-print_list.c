#include "lists.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * print_list - prints all the elemnest of a list
 * @h: const list_t type
 * Return: 0.
 */
size_t print_list(const list_t *h)
{
	int length;
	int *p;

	p = malloc(sizeof(h));
	if (p == NULL)
		return (-1);
	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		length++;
	}
	return (length);
}
