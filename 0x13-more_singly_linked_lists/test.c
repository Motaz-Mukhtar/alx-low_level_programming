#include "lists.h"
#include <stddef.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
size_t print_listint(const listint_t *h)
{
	int len = 0;

	if (h == NULL)
		return (0);
	while (h)
	{
		if (h == NULL)
			printf("(nil)");
		else
			printf("%d\n", h->n);
		len++;
		h = h->next;
	}
	return (len);
}

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (0);
	new->n = n;
	new->next = NULL;

	if (*head == NULL)
		*head = new;
	else
	{
		listint_t *last_node = *head;
		
		while (last_node->next != NULL)
		{
			last_node = last_node->next;
		}
		last_node->next = new;
	}
	return (*head);
}

void free_listint2(listint_t **head)
{
	listint_t *tmp;
	
	tmp = *head;
	while (*head)
	{
		tmp = tmp->next;
		free(*head);
		*head = tmp;
	}
}

int main(void)
{
	listint_t  *head;
	head = NULL;
	add_nodeint_end(&head, 0);
	add_nodeint_end(&head, 1);
	add_nodeint_end(&head, 2);
	print_listint(head);
	free_listint2(&head);
	printf("%p\n", head);
	return (0);
}
