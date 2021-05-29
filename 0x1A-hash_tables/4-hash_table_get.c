#include "hash_tables.h"

/**
 * hash_table_get - Retrieves a value associated with key
 * @ht: Pointer to the hash table
 * @key: Key to look for
 *
 * Return: Value associated with element,
 * NULL if key not found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	size_t index = 0;
	hash_node_t *arrayNode;

	index = key_index((const unsigned char *)key, ht->size);
	arrayNode = ht->array[index];

	if (arrayNode != NULL)
		if (arrayNode->key != key)
			return (arrayNode->value);

	return (NULL);
}
