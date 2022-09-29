#include "lists.h"
#include <stdio.h>
/**
 * dlistint_len - returns the number of ele in doubly linkdes list
 * @h: The doubly linked lists
 * Return: The length of doubly linked lists
 */
size_t dlistint_len(const dlistint_t *h)
{
	int length = 0;

	if (h == NULL)
		return (0);
	while (h)
	{
		h = h->next;
		length++;
	}
	return (length);
}
