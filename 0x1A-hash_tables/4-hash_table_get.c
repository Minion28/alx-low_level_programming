#include "hash_tables.h"

/**
 * hash_table_get - retrieve a value associated with a key
 * @ht: the hash table you want to look into
 * @key: the key you are looking for
 * Return: value associated with element, otherwise NULL
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{

	hash_node_t *ret;
	unsigned long int ind;

	if (ht == NULL || key == NULL || *key == '\0')
	{
		return (NULL);
	}

	ind = key_index((const unsigned char *)key, ht->size);
	if (ind >= ht->size)
	{
		return (NULL);
	}

	ret = ht->array[ind];
	while (ret && strcmp(ret->key, key) != 0)
	{
		ret = ret->next;
	}
	return ((ret == NULL) ? NULL : ret->value);
}
