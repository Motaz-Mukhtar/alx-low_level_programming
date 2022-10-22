#include "hash_tables.h"

/**
 * key_index - gives you the index of akey
 * @key: const unsigned char
 * @size: unsigned long int
 * Return: The index of the key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int n;

	n = hash_djb2(key) % size;

	return (n);
}
