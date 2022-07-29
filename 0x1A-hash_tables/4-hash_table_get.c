#include "hash_tables.h"

/**
 * hash_table_get - retrieve a value associated with a key
 * @ht: the hash table you want to look into
 * @key: the key you are looking for
 * Return: value associated with element, otherwise NULL
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
unsigned long int index;
	hash_node_t *found_node = NULL;

	if (ht == NULL)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	found_node = ht->array[index];

	if (found_node == NULL)
		return (NULL);

	while (found_node)
	{
		if (strcmp(found_node->key, key) == 0)
			return (found_node->value);
		found_node = found_node->next;
	}

	return (NULL);
}
