#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stddef.h>
/**
 * hash_table_delete - deletes a hash table
 * @ht: The hash Table
 * Return: Void
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *temp, *node;
	hash_table_t *head = ht;
	unsigned long int i;

	if (ht == NULL)
		return;
	for (i = 0; i < ht->size; i++)
	{
		temp = ht->array[i];
		while (temp != NULL)
		{
			node = temp->next;
			free(temp->key);
			free(temp->value);
			temp = node;
		}
	}
	free(node);
	free(head->array);
}
