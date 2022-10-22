#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>

/**
 * hash_table_set - adds an element of the hash table
 * @ht: The table
 * @key: const char
 * @value: const char
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new = malloc(sizeof(hash_node_t));
	char *copy;
	unsigned long int index, i;

	if (ht == NULL)
	{
		free(new);
		return (0);
	}

	copy = strdup(value);
	index = key_index((const unsigned char *)key, ht->size);
	for (i = index; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = copy;
			return (1);
		}
	}

	if (new == NULL || key == NULL)
	{
		free(new);
		free(copy);
		return (0);
	}

	new->key = strdup(key);
	new->value = copy;
	new->next = ht->array[index];
	ht->array[index] = new;
	return (1);
}
