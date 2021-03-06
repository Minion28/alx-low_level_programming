#include "hash_tables.h"

/**
 * key_index - create a hash table
 * @size: the size of hash table
 * @key: the key
 * Return: hash table
 
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
