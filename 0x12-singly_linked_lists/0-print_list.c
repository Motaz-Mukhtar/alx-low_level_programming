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

	if (h->str == NULL)
	{
		printf("[0] (nil)\n");
		while (h)
		{
			length++;
			h = h->next;
		}
	}
	else
	{
		while (h)
		{
			printf("[%d] %s\n", h->len, h->str);
			h = h->next;
			length++;
		}
	}
	return (length);
}
