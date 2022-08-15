#include "lists.h"
#include <stdio.h>
#include <stddef.h>
/**
 * listint_len - returns the number of elemin linekd list
 * @h: linked list type
 */
size_t listint_len(const listint_t *h)
{
	int len = 0;

	if (h == NULL)
		return (0);
	while (h)
	{
		len++;
		h = h->next;
	}
	return (len);
}
