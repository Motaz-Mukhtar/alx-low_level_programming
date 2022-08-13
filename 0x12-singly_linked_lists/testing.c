#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * free_list - frees a list_t list
 * Return: 0.
 */
void free_list(list_t *head)
{
	list_t *tmp = head;
	
	while (tmp)
	{
		list_t *n1 = tmp;
		tmp = tmp->next;
		free(n1);
	}
}
int main(void)
{
	list_t *head;

	head = NULL;
	add_node_end(&head, "Bob");
	add_node_end(&head, "&");
	add_node_end(&head, "Kris");
	add_node_end(&head, "love");
	add_node_end(&head, "asm");
	print_list(head);
	free_list(head);
	head = NULL;
	return (0);
}
