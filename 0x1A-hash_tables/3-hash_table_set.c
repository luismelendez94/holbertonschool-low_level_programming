#include "hash_tables.h"

/**
 * hash_table_set - Adds an element to the hash table
 * @ht: Pointer to hash table
 * @key: Is the key
 * @value: Associated with the key
 *
 * Return: 1 if success, 0 if not
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *newNode;
	unsigned long int index = 0;
	char *tmpVal;

	if (key == NULL || !key || !ht || !(ht->array))
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	newNode = ht->array[index];

	while (newNode && (strcmp(key, newNode->key) != 0))
	{
		newNode = newNode->next;
	}

	if (newNode != NULL)
	{
		tmpVal = strdup(value);
		if (!tmpVal)
			return (0);
		if (newNode->value)
			free(newNode->value);
		newNode->value = tmpVal;
		return (1);
	}

	return (collisionNode(ht, key, value));
}

/**
 * collisionNode - If the node have information, enters here
 * @ht: Pointer to hash table
 * @key: Is the key
 * @value: Associated with the key
 *
 * Return: 1 if success, 0 if not
 */
int collisionNode(hash_table_t *ht, const char *key, const char *value)
{
	size_t index;
	hash_node_t *newNode;

	index = key_index((const unsigned char *)key, ht->size);

	newNode = malloc(sizeof(hash_node_t));
	if (newNode == NULL)
		return (0);

	newNode->key = strdup(key);
	newNode->value = strdup(value);

	if (ht->array[index] == NULL)
		newNode->next = ht->array[index];
	else
		newNode->next = ht->array[index];
	ht->array[index] = newNode;

	return (1);
}
