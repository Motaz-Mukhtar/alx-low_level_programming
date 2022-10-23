#include "hash_tables.h"
#include <string.h>
/**
 * hash_table_get - retrieves a value associated with key
 * @ht: the hash Table
 * @key: The key of the node
 * Return: The Value or NULL if key couldn't be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index, i;
	char *the_value;

	if (key == NULL || ht == NULL)
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	for (i = index; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			the_value = ht->array[i]->value;
		}
	}
	return (the_value);
}
