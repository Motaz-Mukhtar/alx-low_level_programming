#include "hash_tables.h"
/**
 * hash_djb2 - hash function implementing the djb2 algoritm
 * @str: const unsigned char
 * Return: unsigned long int
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c;
	}
	return (hash);
}
