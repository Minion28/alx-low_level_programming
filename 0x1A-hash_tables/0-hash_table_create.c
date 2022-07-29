#include "hash_tables.h"

/**
 * hash_table_create - create a hash table
 * @size: the size of hash table
 * Return: returns the hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;
	unsigned long int x;

	ht = malloc(sizeof(hash_table_t));
	if (ht == NULL)
	{
		return (NULL);
	}
	ht->size = size;
	ht->array = malloc(sizeof(hash_table_t *) * size);
	if (ht->array == NULL)
	{
		return (NULL);
	}
	for (x = 0; x < size; x++)
	{
		ht->array[x] = NULL;
	}
	return (ht);
}
