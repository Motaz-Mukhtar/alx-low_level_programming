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
	head = NULL;
}

void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}

int pop_listint(listint_t **head)
{
	int num;
	listint_t *tmp = malloc(sizeof(listint_t));

	if (*head == NULL)
		return (0);
	tmp = *head;
	num = tmp->n;
	*head = tmp->next;
	return (num);
}

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	int key = 1;
	
	while (head && key == 1)
	{
		if (i == index)
			key = 0;
		else
			head = head->next;
		i++;
	}
	return (head);
}

int main(void)
{
	listint_t *node;
	listint_t  *head;

	head = NULL;
	add_nodeint_end(&head, 0);
	add_nodeint_end(&head, 1);
	add_nodeint_end(&head, 2);
	add_nodeint_end(&head, 3);
	add_nodeint_end(&head, 4);
	add_nodeint_end(&head, 98);
	add_nodeint_end(&head, 402);
	add_nodeint_end(&head, 1024);
	print_listint(head);
	node = get_nodeint_at_index(head, 7);
	printf("%d\n", node->n);
	print_listint(head);
	free_listint2(&head);
	return (0);
}
