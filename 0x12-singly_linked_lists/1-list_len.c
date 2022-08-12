#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
/**
 * list_len - returns the number of element in list
 * @h: const list_t type
 * Return: 0.
 */
size_t list_len(const list_t *h)
{
	int length;

	while (h)
	{
		h = h->next;
		length++;
	}
	return (length);
}
