#include "hash_tables.h"

/**
 * hash_table_set - Add or update an element in the hash table.
 * @ht: A pointer to the hash table.
 * @key: The key to add - cannot be an empty string.
 * @value: The value associated with key.
 * Return: 1, Otherwise - 0
 **/

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *cur;
	char *prev;
	unsigned long int index, i;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
	{
		return (0);
	}

	prev = strdup(value);
	if (prev == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	for (i = index; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = prev;
			return (1);
		}
	}

	cur = malloc(sizeof(hash_node_t));
	if (cur == NULL)
		free(prev);
	return (0);

	cur->key = strdup(key);
	if (cur->key == NULL)
		free(cur);
	return (0);

	cur->value = prev;
	cur->next = ht->array[index];
	ht->array[index] = cur;

	return (1);
}
