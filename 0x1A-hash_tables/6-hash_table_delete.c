#include "hash_tables.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * hash_table_delete - deletes a hash table
 * @ht: The hash Table
 * Return: Void
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *temp;
	unsigned long int i;

	if (ht == NULL)
		return;
	for (i = 0; i < ht->size; i++)
	{
		temp = ht->array[i];
		while (temp != NULL)
		{
			free(temp->key);
			free(temp->value);
			temp = temp->next;
		}
	}
	free(ht->array);
}
