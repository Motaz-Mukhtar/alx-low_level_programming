#include "hash_tables.h"
#include <stddef.h>
#include <stdio.h>
/**
 * hash_table_print - prints a hash table.
 * @ht: The Hash Table
 * Return: Void
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	unsigned int comma = 0;
	hash_node_t *temp;

	if (ht == NULL)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			if (comma == 1)
				printf(", ");
			temp = ht->array[i];
			while (temp)
			{
				printf("\'%s\': \'%s\'", temp->key, temp->value);
				temp = temp->next;
				if (temp != NULL)
					printf(", ");
			}
			comma = 1;
		}
	}
	printf("}\n");
}
